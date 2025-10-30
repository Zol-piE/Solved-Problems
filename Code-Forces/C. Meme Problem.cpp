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
void pr(vector<int> &arr,int n)
{
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int d;cin>>d;
        int dif = (d*d) - 4*d;
        if(dif<0)
        {
            cout<<"N"<<endl;
            continue;
        }
        double a = sqrt(dif);
        a = a + d;
        a = a / 2;
        double b = d - a;
        cout<<"Y " << fixed << setprecision(9) << a << " " << b << endl;
    }
    return 0;
}