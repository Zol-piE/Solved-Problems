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


struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
using ui = unordered_map<int,int,custom_hash>;
ll sq(ll n) {
    long double r = sqrtl((long double)n);
    ll ans = (ll)r;
    while ((__int128)ans * ans > n) ans--;
    while ((__int128)(ans + 1) * (ans + 1) <= n) ans++;
    return ans;
}

void pr(vi &arr, int n) {
    for (ll i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    while (tc--) {

    	int n,q; cin>>n>>q;
    	vector<int> arr(n+1,0),brr(n+1,0);
    	for(int i=1;i<=n;i++)
    	{
    		cin>>arr[i];
    	}
    	for(int i=1;i<=n;i++)
    	{
    		cin>>brr[i];
    		arr[i] = max(arr[i],brr[i]);
    	}
    	for(int i=n-1;i>=1;i--)
    	{
    		arr[i] = max(arr[i],arr[i+1]);
    	}
    	// pr(arr,n+1);
        vector<int> pSum(n+1,0);
        pSum[1] = arr[1];
        for(int i =2;i<=n;i++)
        {
            pSum[i] = pSum[i-1]+arr[i];
        }
        // pr(pSum,n+1);
        for(int i=1;i<=q;i++)
        {
            int a,b; cin>>a>>b;
            cout<<pSum[b] - pSum[a-1]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
