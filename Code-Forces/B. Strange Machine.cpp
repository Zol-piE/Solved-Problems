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
        int n,q; cin>>n>>q;
        string str; cin>>str;

        int b = count(str.begin(),str.end(),'B');

       for(int i =0;i<q;i++)
       {
       		int x; cin>>x;
       		if(b== 0) 
       		{
       			cout<<x<<endl;
       			continue;
       		}
       		int ans = 0;
       		while(x>0)
       		{
       			for(int i =0;i<n;i++)
       			{
       				if(x<= 0) break;
       				if(str[i] =='A')
       				{
       					ans++;
       					x = x-1;
       				}
       				else
       				{
       					ans++;
       					x= x/2;
       				}
       			}
       		}
       		cout<<ans<<endl;

       }
    }
    return 0;
}