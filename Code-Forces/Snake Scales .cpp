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
    int k =1;
    while (tc--)
    {
        int n;cin>>n;
        int mx = 0;
        vector<int> arr(n,0);
        rep(0,n) cin>>arr[i];
        rep(1,n)
        {
        	mx = max(mx,abs(arr[i]-arr[i-1]));
        }
        cout<<"Case #"<<k<<": "<<mx<<endl;
        k++;
    }
    return 0;
}