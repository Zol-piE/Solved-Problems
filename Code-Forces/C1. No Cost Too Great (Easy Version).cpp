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
const int SIZE = 2e5 + 1;
vector<vector<int>> pf(2e5+1);
void pr(vector<int> &arr,int n)
{
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
}
void sieve()
{
    for(int i = 2;i<=SIZE;i++)
    {
        if( !pf[i].empty()) continue;
        for(int j = i;j<=SIZE; j +=i)
        {
            pf[j].push_back(i);
        }
    }
}
int solve(vector<int> &arr, int &n)
{
    map<int,int> freq;
    for(int i =0;i<n;i++)
    {
        for(int x : pf[arr[i]])
        {
            freq[x]++;
            if(freq[x]> 1) 
            {
                return 0;
            }
        }
    }
    for(int i =0;i<n;i++)
    {
        
        for(int x: pf[arr[i]]) freq[x]--;

        for(int x:pf[arr[i]+1])
        {
            freq[x]++;
            if(freq[x]> 1) 
            {
                return 1;
            }
        }

        for(int x: pf[arr[i] + 1 ]) freq[x]--;

        for(int x: pf[arr[i]]) freq[x]++;
    }
    return 2;
}
signed main()
{
    sieve();
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        vector<int> arr(n,0);
        rep(0,n) cin>>arr[i];
        rep(0,n)
        {
            int x;cin>>x;
        }
        cout<<solve(arr,n)<<endl;
    }
    return 0;
}