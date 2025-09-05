#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int logBaseA(int a) // log base 3
{
    return log2(a) / log2(3);
}
signed main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        ll  sum = 0;
        int a = logBaseA(n);
        vector<pair<ll,ll>> pt;
        ll x = 1 , y =3;
        pt.push_back({x,y});
//        cout<<a<<endl;
        for(int i=1;i<=a;i++)
        {
            y = (x*3*3) + i * x ;
            x *=3;
            pt.push_back({x,y});

        }
        sort(pt.rbegin(),pt.rend());
        for(auto &x : pt)
        {
            if(x.first<=n)
            {
                int t = n / x.first;
                n -= ( x.first * t);
                sum+=(x.second * t);
            }
            if(n==0) break;
        }
        cout<<sum<<endl;

    }
}

