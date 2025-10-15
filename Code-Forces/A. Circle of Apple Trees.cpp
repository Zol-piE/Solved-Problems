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
signed main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n; cin>>n;
		vector<int> arr(n,0);
		rep(0,n) cin>>arr[i];
		sort(arr.begin(),arr.end());
		int sum = 1 , curr = arr[0];
		for(int i =1;i<n;i++ )
		{
			if(curr<arr[i]) { sum ++;
			curr = arr[i]; }
		}
		cout<<sum<<endl;

	}
	return 0;
}