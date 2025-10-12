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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        vector<bool> arr(101,false);
        rep(0,n)
        {
        	int x;cin>>x;
        	arr[x] = true;
        }
        for(int i =0;i<=100;i++)
        {
        	if(arr[i] ==false) {cout<<i<<endl; break;}
        }
    }
    return 0;
}