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

signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    while (tc--) {

    int n; cin>>n;
    vi arr(n+1,0);
    rep(1,n+1) cin>>arr[i];
    sort(arr.begin(),arr.end());
    if(arr[n] == 1)
    {
    	cout<<1<<endl;
    	continue;
    }
    int l = 0;
    for(int i =1;i<=n;i++)
    {
    	if(arr[i] == 0)
    	{
    		l++;
    	}
    	else break;
    }
    int r = n - l;
    cout<<r - (n - arr[n] ) <<endl;

    }

    return 0;
}
