#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int MOD = 1e6 + 1;
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
	vector<bool> arr(MOD,true);
	for(int i=2;i*i<=MOD;i++)
    {
        if(arr[i])
        {
            for(int j = i*i;j<=MOD;j+=i)
            {
                arr[j] = false;
            }
        }
    }

    int n; cin>>n;
    for(int i =1;i<=n;i++)
    {
    	int x; cin>>x;
    	int j = sqrt(x);
    	if( j!=1 && arr[j])
    	{
    		if((j*j) == x ) yes
    		else no
    	}
    	else no
    }
    return 0;
}