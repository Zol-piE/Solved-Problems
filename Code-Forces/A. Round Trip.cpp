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
        int r,x,d,n; cin>>r>>x>>d>>n;
        string str; cin>>str;
        int cnt = 0;
        for(int i =0;i<n;i++)
        {
        	if(str[i] == '1')
        	{
        		cnt++;
        		r = max(0LL,r-d);
        	}
        	else
        	{
        		if(r < x)
        		{
        			cnt++;
        			r = max(0LL,r-d);
        		}
        	}
        }
        cout<<cnt<<endl;
    }
    return 0;
}