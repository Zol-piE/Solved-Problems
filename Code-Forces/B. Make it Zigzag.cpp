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
        vector<int> arr(n+1,0);
        rep(1,n+1) cin>>arr[i];
        int mx = INT_MIN;
        for(int i =1;i<=n;i++)
        {
        	if(arr[i]>mx) mx = arr[i];
        	if((i & 1) == 0) arr[i] = mx;
        }
        // pr(arr,n+1);
        int res = 0;
        for(int i =1 ;i<=n;i++)
        {
        	if(i & 1 )
        	{
        		if(i == 1 && arr[i] >= arr[i+1] ) res++;
        		else if(i==n && arr[i] >= arr[i-1] )
        		{
        			if(arr[i] == arr[i-1] ) res++;
        			else res  = res + 1 + (arr[i] - arr[i-1]);
        		}
        		else if( i>1 && i<n && arr[i] >= (min(arr[i-1],arr[i+1])))
        		{
        			int x =  (min(arr[i-1],arr[i+1]));
        			if(arr[i] == x ) res++;
        			else res  = res + 1 + (arr[i] - x);
        		}
        		// cout<<arr[i]<<" "<<res<<endl;
        	}
        }
        cout<<res<<endl;
    }
    return 0;
}