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
vector<int> sumDigit(ll x)
{
    int n =  floor(log10(x)) + 1 ;

    vector<int> sum(n+1,0);
    int i = n;
    while(x>0)
    {
        sum[0] += x%10;
        sum[i--] = x%10;
        x /=10;
    }
    return sum;
}
signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    while (tc--) {

    ll x; cin>>x;
    vector<int> arr = sumDigit(x);

    int n = arr.size();

    sort(arr.begin()+2,arr.end(),greater<int>());
//
//    rep(0,n) cout<<arr[i]<<" ";
//    cout<<endl;
     int c1 =0;
     int sum = arr[0];
     for(int i =2;i<n;i++)
     {
         if(arr[0]<= 9) break;

         arr[0] -=arr[i];
         c1++;
     }
     arr[0] = sum;
     arr[0] = arr[0] - arr[1]+1;
     int c2 = 1;
     for(int i =2;i<n;i++)
     {
         if(arr[0]<= 9) break;

         arr[0] -=arr[i];
         c2++;
     }
     cout<<min(c1,c2)<<endl;

    }

    return 0;
}
