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
		int a,b; cin>>a>>b;
		if(a==b) cout<<0<<endl;
		else{
			vector<int> arr(32,0);
			for(int i =0;i<32;i++)
			{
				arr[i]=(((a>>i) & 1));
			}
			vector<int> brr(32,0);
			for(int i =0;i<32;i++)
			{
				brr[i]=(((b>>i) & 1));
			}
			vector<int> ans;
			int c = 0;
			for(int i =0;i<32;i++)
			{
				if(arr[i] != brr[i])
				{

					c++;
					if(a<(1<<i))
					{
						c =-1;
						break;
					}
					ans.push_back((1<<i));
				}
			}
			cout<<c<<endl;
			if(c!=-1) pr(ans,c);
		}

	}
	return 0;
}