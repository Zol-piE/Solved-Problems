#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin>>n;
        int sum =0;
        int elem =0;
        while(n--)
        {
        string str; cin>>str;
        int len =  str.length();
        for(int i =0;i<len;i++)
        {
            sum += i + (str[i] - 65 ) + elem;
//            cout<<sum<< " "<< i << " " << (str[i] - 65 ) << " "<<elem<<endl;
        }
        elem++;
        }
        cout<<sum<<endl;
    }
}
