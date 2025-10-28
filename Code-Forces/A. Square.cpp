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
    	vector<int> arr(4,0);
    	for(int i =0;i<4;i++) cin>>arr[i];

    	bool l = true;
    	for(int i =1;i<4;i++)
    	{
    		if(arr[i] != arr[i-1])
    		{
    			l = false;
    			break;
    		}
    	}
    	if(l) yes
    	else no
    }
    return 0;
}