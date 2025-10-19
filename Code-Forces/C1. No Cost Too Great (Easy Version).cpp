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
        int n;cin>>n;
        vector<int> arr(n,0);
        bool l = true;
        rep(0,n)
        {
        	cin>>arr[i];
        	if(arr[i] == 1 ) l = false;

        }

        vector<int> brr(n,0);

        rep(0,n) cin>>brr[i];

        if(l) cout<<2<<endl;
        else
        {
        	int g1 = 1;
        	for(int i =0;i<n;i++)
        	{
        		if(arr[i] != 1) 
        		{
        			g1 = arr[i];
        			break;
        		}
        	}
        	int g2 = 1;
        	for(int i =0;i<n;i++)
        	{
        		if(arr[i] != g2 && arr[i] != g1) 
        		{
        			g2 = arr[i] ;
        			break;
        		}
        	}
        	int g = gcd(g1,g2);
        	if(g != 1) cout<<0<<endl;
        	else cout<<1<<endl;
        }

    }
    return 0;
}