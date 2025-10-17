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
    int n,tc;
    cin >>n>> tc;
    vector<int> arr(n+1,0);
    rep(1,n+1) cin>>arr[i];

    //XOR the array elements from 1 to n-1

    for(int i =2;i<=n;i++)
    {
    	arr[i] = arr[i-1] ^ arr[i];
    }
    // pr(arr,n+1);


    while (tc--)
    {
        int l,r; cin>>l>>r;
        cout<<(arr[r]^arr[l-1])<<endl;
    }
    return 0;
}