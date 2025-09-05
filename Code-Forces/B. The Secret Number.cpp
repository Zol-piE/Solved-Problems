#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int base = 1;
        stack<int> st;
        for(int i=1; i<=17; i++)
        {
            base *=10;
            int b = n % (base + 1);
            if(b==0)
            {
//                cout<<(n / (base + 1))<<" ";
                st.push((n / (base + 1)));
            }
        }
        if(st.empty()) cout<<0;
        else
        {
            cout<<st.size()<<endl;
            while(!st.empty())
            {
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        cout<<endl;
    }
}
