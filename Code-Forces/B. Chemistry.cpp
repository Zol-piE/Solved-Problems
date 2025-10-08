#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define c(var) cerr<<var<<endl;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void p(vector<int>&arr)
{
	for(int i : arr) cerr<<i<<" ";
	cerr<<endl;
}
bool solve(vector<int>&arr,int n,int k)
{
	// p(arr);
	if(arr[0]==1) arr[0] =0;
	for(int i =0;i<n;i++)
	{
		if((arr[i] & 1))
		{
			k = k - (arr[i]%2);
			arr[i] = arr[i] - (arr[i]%2);
		}
	}
	p(arr);
	c(k);
	if(!arr[0]) arr[0]=1;
	if(k<0) return false;
	else
	{
		int i = n-1;
		int res = 0;
		if(k & 1) 
		{
			res =1;
			k -=res;
		}
		while(k>0 && i>=0)
		{
			if(arr[i] > k ) k = 0;
			else k = k - arr[i];
			i--;
		}
		p(arr);
		c(k);
		if(k>0 || arr[0] == 0 ) return false;
		if(k==0)
		{
			if(res)
			{
				for(int i =0;i<n;i++)
				{
					if(arr[i] == 1 || arr[i] ==2) return true;
				}
				return false;
			}
			return true;
		}
	}
	return false;
}
signed main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n,k; cin>>n>>k;
		unordered_map<char,int> fq;
		vector<int>arr;
		for(int i =0;i<n;i++)
		{
			char ch; cin>>ch;
			fq[ch]++;
		}
		for (auto p : fq) {
			// cout<<p.first<<" -- "<<p.second<<endl;
			arr.push_back(p.second);
		}
		sort(arr.begin(),arr.end());
		n = arr.size();
		if(solve(arr,n,k)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
		return 0;
}