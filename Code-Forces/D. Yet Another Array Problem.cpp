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
        int n; cin>>n;
        vector<int> arr(n,0);
        rep(0,n) cin>>arr[i];
        vector<int> crr(n,0);
        rep(0,n) cin>>crr[i];
        int res =0;
        for(int i =0;i<n-1;i++)
        {
            if(arr[i] > arr[i+1])
            {
                res += crr[i];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}