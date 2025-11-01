#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

struct custom_hash {
	static uint64_t splitmix64(uint64_t x) {
		x += 0x9e3779b97f4a7c15;
		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
		return x ^ (x >> 31);
	}
	size_t operator()(uint64_t x) const {
		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
		return splitmix64(x + FIXED_RANDOM);
	}
};

signed main()
{
	OP
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int &x : arr) cin >> x;

		int max_sum = 0;
		int curr_sum = 0;
		int last = 0;
		int count_neg = 0;
		const int BIG = 1e9;

		for (int i = 0; i < n; i++)
		{
			if (arr[i] == -1)
			{
				count_neg++;
				max_sum = max(max_sum, curr_sum + count_neg * BIG);
			}
			else
			{
				if (arr[i] >= last)
				{
					curr_sum += count_neg * arr[i] + arr[i];
				}
				else
				{
					curr_sum = count_neg * arr[i] + arr[i];
				}
				count_neg = 0; // reset after processing
				last = arr[i];
				max_sum = max(max_sum, curr_sum);
			}
		}
		cout << max_sum << endl;
	}
	return 0;
}
