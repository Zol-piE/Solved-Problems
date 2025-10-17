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
bool pal(string &str,string &ptr)
{
	return str == ptr;
}
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int  n; cin>>n;
        int c=0;
        vector<int> arr;
        for(int i =0;i<n;i++)
        {
        	char ch;cin>>ch;
        	if(ch=='0')
        	{
        		c++;
        		arr.push_back(i);
        	}
        }
        cout<<c<<endl;
        rep(0,c) cout<<arr[i]+1<<" ";
        cout<<endl;

    }
    return 0;
}