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
        int minus =0, zero=0;
        rep(0,n)
        {
        	int x; cin>>x;
        	if(x==(-1)) minus++;
        	else if(x==0) zero++;
        }
        cout<<((minus%2)*2)+(zero * 1)<<endl;

    }
    return 0;
}