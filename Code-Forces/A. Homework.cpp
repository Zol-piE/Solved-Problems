#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
//#define int long long
//const int MOD = 1e9 + 7;
//const int INF = LLONG_MAX >> 1;
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        deque<char>dq;
        int n; cin>>n;
        for(int i=1;i<=n;i++)
        {
            char ch;cin>>ch;
            dq.push_back(ch);
        }
        int m;cin>>m;
        string b,c;
        cin>>b>>c;
        for(int i=0;i<m;i++)
        {
            if(c[i]=='V') dq.push_front(b[i]);
            else dq.push_back(b[i]);
        }
        for( char ch : dq) cout<<ch;
        cout<<endl;

    }
}

