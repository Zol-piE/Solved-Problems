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
        int n,k; cin>>n>>k;
        string str;cin>>str;
        vector<int> arr;
        for(int i =0;i<n;i++)
        {
        	if(str[i]=='1') arr.push_back(i+1);
        }
        n = arr.size();
        int res = 0;
       	if(n>0)
       	{
       		res ++;
       		for(int i = 1;i<n;i++)
       		{
       			int l = arr[i] - arr[i-1] - 1;
       			if(l >= (k-1)) res++;
       		}
       	}
       	cout<<res<<endl;
    }
    return 0;
}