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
#define SIZE 1e9 + 1 
void pr(vector<int> &arr,int n)
{
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

int  dp(int a,string &str,int n,map<int,int> &mem)
{
	if(mem.find(a) != mem.end() ) return mem[a];
	int ans = 0;
	int temp = a;
	for(int i =0;i<n;i++)
	{
		if(a<=0) break;
		if(str[i] == 'B' ) 
		{
			a/=2;
			ans++;
		}
		else 
		{
			a = a -1;
			ans++;
		}
	}
	return mem[temp] = ans + dp(a,str,n,mem);
}
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,q; cin>>n>>q;

        string str; cin>>str;
        map<int,int> mem;
        mem[0] = 0;
        for(int i =1;i<=q;i++)
        {
        	int a ; cin>>a;
        	cout<<dp(a,str,n,mem)<<endl;
        }

    }
    return 0;
}