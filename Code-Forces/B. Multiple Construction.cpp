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
        for(int i = n-1 ;i>=1; i --) cout<<i<<" ";
        cout<<n<<" ";
    	for(int i =1;i<=n;i++) cout<<i<<" ";
    	cout<<endl;
    }
    return 0;
}