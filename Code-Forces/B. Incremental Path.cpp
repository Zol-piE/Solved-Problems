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
        int n,k; cin>>n>>k;
        string str; cin>>str;
        set<int> st; 
        for(int i =0;i<k;i++)
        {
        	int x ; cin>>x;
        	st.insert(x);
        }
        int intial = 1;
        for(int i =0;i<n;i++)
        {
        	if(str[i] =='A')
        	{
        		intial++;
        		st.insert(intial);
        	}
        	else
        	{
        		int j =  intial+1;
        		while(st.find(j) != st.end())
        		{
        			j++;
        		}
        		intial = j;
        		st.insert(intial);
        	}
        }
        cout<<st.size()<<endl;
        for(int i : st) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}