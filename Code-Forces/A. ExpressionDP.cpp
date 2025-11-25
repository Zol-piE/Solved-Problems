#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define yes cout << "YES\n";
#define no  cout << "NO\n";

using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

#define rep(a,b) for(ll i = (a); i < (b); i++)
#define ZolpiE ios_base::sync_with_stdio(false); cin.tie(nullptr);

using vi = vector<int>;

int solve(vi &arr,int n)
{
	vector<vector<int>> dp(n,vector<int>(n,0));

	for(int i =0;i<n;i++) dp[i][i] = arr[i];

	for(int len = 2;len<=n;len++)
	{
		for(int l = 0 ; l+len-1<n;l++)
		{
			int r  = l + len -1;
			int best = INT_MIN;
			for(int k =l; k<r ;k++)
			{
				int left =  dp[l][k];
				int right = dp[k+1][r];
				best = max(best,left + right);
				best = max(best,left * right);
			}
			dp[l][r] = best;
		}
	}
	return dp[0][n-1];
}

signed main() {
    ZolpiE

    // int tc;
    // cin >> tc;
    // while (tc--) {

    vector<int> arr(3,0);

    rep(0,3) cin>>arr[i];

    cout<<solve(arr,3)<<endl;


    // }

    return 0;
}
