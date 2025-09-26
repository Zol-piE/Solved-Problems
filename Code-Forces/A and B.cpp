#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int solve(vector<int> &arr,int &n)
{

	int mid = n / 2;
	vector<int> vec(n,0);
	int res =  arr[mid];
	for(int i = mid ; i >= 0; i--)
	{
		vec[i] = res;
		res--;
	}
	res = arr[mid]+1;
	for(int i = mid+1;i<n;i++)
	{
		vec[i] = res++;
	}
	res = 0;
	rep(0,n)
	{
		res += abs(vec[i] - arr[i]);
	}
	return res;
}
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n ; cin>>n;
        vector<int>a,b;
        int s_a=0,s_b=0;
        for(int i =0;i<n;i++)
        {
        	char ch ; cin>>ch;
        	if(ch=='a')
        	{
        		a.push_back(i);
        		s_a++;
        	}
        	else
        	{
        		b.push_back(i);
        		s_b++;
        	}
        }
        int res = 0;
        if( s_a <= 1 || s_b <=1 ) res =0 ;
        else
        {
        	res = min(solve(a,s_a),solve(b,s_b));
        }
        cout<<res<<endl;
    }
    return 0;
}