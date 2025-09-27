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
        int m; cin>>m;
        vector<int> arr(m,0);
        rep(0,m) cin>>arr[i];
        int a1 = arr[0];
        bool l = false;
        for(int i =1;i<m;i++)
        {
        	if(arr[i] !=  (a1 + i))
        	{
        		l = true;
        		break;
        	}
        }
        if(l) cout<< 1<<endl;
        else cout<<(n - arr[m-1] + 1)<<endl;
    }
    return 0;
}