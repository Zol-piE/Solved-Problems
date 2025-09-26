#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main()
{
	int n = 40;
	vector<int>arr(n,0);
	rep(0,n) cin>>arr[i];
	vector<int>brr(n,0);
	rep(0,n) cin>>brr[i];
	rep(0,n)
	{
		if(arr[i]==brr[i] ) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}

}