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
vector<int> bit(int x)
{
	vector<int> arr(32,0);
	for(int i =0;i<32;i++)
	{
		arr[i] = ((x>>i) & 1);
	}
	reverse(arr.begin(),arr.end());
	return arr;
}

signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x,y,z; cin>>x>>y>>z;
        vector<int> xArr = bit(x);
        vector<int> yArr = bit(y);
        vector<int> zArr = bit(z);
        bool l = true;
        for(int i =0;i<32;i++)
        {
        	int c = 0;
        	if(xArr[i] == 1) c++;
        	if(yArr[i] == 1) c++;
        	if(zArr[i] == 1) c++;
        	if(c !=0 && (c&1) ==0 )
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