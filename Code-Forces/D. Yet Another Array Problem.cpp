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
vector<int> printPrime(int n)
{
    vector<bool> arr(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i])
        {
            for(int j = i*i;j<=n;j+=i)
            {
                arr[j] = false;
            }
        }
    }
    vector<int> pr;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]) pr.push_back(i);
    }
    return pr;
}
signed main()
{
    int tc;
    cin >> tc;
    vector<int> p = printPrime(100);
    while (tc--)
    {
        int n; cin>>n;
        vector<int> arr(n);
        for(int &x : arr) cin>>x;
        int l = false;
        for(int x : p)
        {
            for(int y : arr)
            {
                if(y % x)
                {
                    cout<<x<<endl;
                    l = true;
                    break;
                }
            }
            if(l) break;
        }

    }
    return 0;
}