#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
bool dual(int n)
{
    vector<int> arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];

    if(accumulate(arr.begin(),arr.end(),0)== n) return true;

    for(int i =0;i<n-1;i++)
    {
        if((arr[i] || arr[i+1] )==false) return true;
    }
    return false;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        if(dual(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

