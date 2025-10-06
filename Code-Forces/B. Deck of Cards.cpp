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
        int s = 0,e = 0,q =0;
        vector<char> arr(n+1,'+');
        for(int i=0;i<k;i++)
        {
        	if(str[i] == '2') q++;
        	else if(str[i]=='1') e++;
        	else s++;
        }
        int i =1,j = n;
        int m = n - s- e;

        for(;i<=s;i++) arr[i] = '-';
    	for(;e>0 && j>=1 ; j--,e--) arr[j] = '-' ;
    	
    	if( m>0 && q >0  && m == q)
    	{
    		while(q>0)
    		{
    			if(i<=j && arr[i] == '+' )
    			{
    				arr[i++] = '-';
    			}
    			q--;
    		}
    	} 
    	else
    	{
    		while(q>0)
    		{
    			if(i<=j && arr[i] == '+' && arr[j] == '+')
    			{
    				arr[i++] = '?';
    				arr[j--] = '?';
    			}
    			q--;
    		}
    	}
    	for(i =1;i<=n;i++) cout<<arr[i];
    	cout<<endl;
    }
    return 0;
}