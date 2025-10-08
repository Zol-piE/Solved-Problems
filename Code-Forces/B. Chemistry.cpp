#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define nl cerr<<endl;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void pr(vector<int>&arr)
{
	for(int i : arr) cerr<<i<<" ";
}
bool chk(vector<int>&odd,int &n)
{
	int c_one = 0;
	int c_odd = 0;
	for(int i =0;i<n;i++)
	{
		if(odd[i] == 1) c_one++;
		else if(odd[i] & 1)
		{
			c_odd++;
			break;
		}
		if(c_one >1) break;
	}
	if(c_odd || c_one >1) return false;
	else return true;

}
void solve(vector<int>&arr,int &n,int &k)
{
	int s = n;
	while(k>0 && n>0)
	{
		pr(arr);nl
		for(int i=s-1;i>=0;i--)
		{
			if(!arr[i]) continue;
			if(arr[i] & 1 )
			{
				k = k - (arr[i] %2);
				arr[i] = arr[i] - 1;
				if(!arr[i]) n--;
			}
			else
			{
				if(arr[i] > k)
				{
					arr[i] = arr[i] - k;
					k =0;
				}
				else
				{
					k = k -arr[i];
					arr[i] = 0;
					n--;
				}
			}
			if(k==0) break;

		}

	}
	pr(arr);nl cerr<<k<<endl;

}

signed main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n,k; cin>>n>>k;
		map<char,int>mp;
		for(int i =0;i<n;i++)
		{
			char ch ; cin>>ch;
			mp[ch]++;
		}
        // for(auto x : mp) cout<<x.first<< ": "<<x.second<<endl;
        // cout<<endl;
		vector<int> even,odd;
		for(auto x : mp)
		{
			if(x.second & 1) odd.push_back(x.second);
			else even.push_back(x.second);
		}
		sort(odd.begin(),odd.end());
		int odd_n = odd.size();
		if(odd_n > k+1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		n = odd_n;
		solve(odd,n,k);
		bool ck = false;
		if(!k && !n) ck = true;
		if(!k && n )
		{
			ck = chk(odd,odd_n);
		}
		else
		{
			sort(even.begin(),even.end());
			int even_n = even.size();
			n = even_n;
			solve(even,n,k);
			if(n==0) ck = false;
			else ck = chk(even,n);
		}
		if(!ck) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
	return 0;
}