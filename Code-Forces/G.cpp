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
using vi = vector<int> ;
//unordered_map<long long int, int, custom_hash> mp; this will work when the key is an int or long long int
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
int sq(int n)
{
	int ans = sqrt(n);
	while((ans*ans) <= n) ans++;
	while((ans*ans) > n) ans--;
	return ans;
}
void pr(vi &arr,int n)
{
	for(int i =0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
}
signed main()
{
	OP
	int tc;
	cin >> tc;
	while (tc--)
	{
		string  str; cin>>str;
		int n = str.length();
		int len2 = -1;
		int cn =0;
		int ch = 0;
		for(int i =0;i<n;i++)
		{
			if(str[i]=='\\' && str[i+1] == '0') 
			{
				if(len2==-1) len2 = i;
				cn++;
			}
			if(str[i] >='a' && str[i]<='z') ch++;
		}
		cout<<ch+cn+1<<" "<<len2<<endl;
	}
	return 0;
}