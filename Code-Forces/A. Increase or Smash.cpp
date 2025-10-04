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
        vector<bool> num(101,false);
        vector<int> arr;
        for(int i =0;i<n;i++)
        {
        	int x ; cin>>x;
        	if(num[x] ==false)
        	{
        		num[x]= true;
        		arr.push_back(x);
        	}
        }
        sort(arr.begin(),arr.end());
        n = arr.size();
        int c = 0;
        for(int i =0;i<n;i++)
        {
        	if(arr[i] != 0)
        	{
        		c++;
        		for(int j = i;j<n;j++)
        		{
        			arr[j] -=arr[i];
        		}
        	}
        }
    	cout<<(c*2)-1<<endl;
    }
    return 0;
}