#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
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
        rep(0,n) cin>>arr[i];
        int mx = INT_MIN,mxi=0;
        for(int i =0;i<n;i++)
        {
        	if(arr[i] > mx)
        	{
        		mx = arr[i];
        		mxi = i;
        	}
        }
        int sum = (n*(n+1)) / 2;
        vector<int>a(n,0);
        int j =1;
        // cout<<sum<<" "<<mx<<" "<<mxi<<" ";
        for(int i =0;i<n;i++)
        {
 			a[i] = j;
 			j++;
        }
        int c = sum - mx;
        // for(int x : a) cout<<x<<" ";
        // cout<<endl;
        if(c==1) 
        {
        	a[mxi] = 1;
        	c =0;
        }
        for(int i =1;i<c;i++)
        {
        	int x = i;
        	for(int j =n-1;x>0 && j>=0;j--)
        	{
        		a[j]--;
        		x--;
        	}
        }
        for(int x : a) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}