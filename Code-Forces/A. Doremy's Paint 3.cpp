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
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        vector<int> arr(n,0);
        int pSum = 0;
        for(int i =0 ; i<n;i++)
        {
        	cin>>arr[i];
        	pSum += (arr[i]) * 2 ;
        }
        bool  l = true;
        for(int i =0;i<(n-1);i++)
        {
        	for(int j = i+1;j<n;j++)
        	{
        		l = (pSum - arr[i] -arr[j]) % (n-1);
        		cerr<<(pSum - arr[i] -arr[j])<<endl;
        		if(!l) break;
        	}
        	if(!l) break;
        }
        if(!l) yes
        else no

    }
    return 0;
}