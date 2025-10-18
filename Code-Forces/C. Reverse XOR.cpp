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
	for(int i =1;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
}
bool solve(int &n)
{
	if(n==0) return true;
	vector<int> arr(33,0);
	for(int i =0;i<32;i++)
	{
		arr[i+1] = ((n>>i) & 1); 
	}
	// cout<<n<<endl;
	// pr(arr,33);
	int i =1,j = 32;
	while(arr[i] != 1) i++;
	while(arr[j] != 1) j--;
	if(i==j) return false;
	while(i<=j)
	{
		// cout<<i<<" "<<j<<endl;
		if(i==j && arr[i] == 1) return false; 
		if(i<j && arr[i] != arr[j]) return false;
		++i; --j;
	}
	return true;
}
signed main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n; cin>>n;
		if(solve(n)) yes
			else no    
	}
		return 0;
	}