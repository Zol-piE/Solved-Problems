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
//unordered_map<long long int, int, custom_hash> mp; this will work when the key is an int or long long int
struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};

void pr(vector<int> &arr,int n)
{
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
signed main()
{
    OP
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x,y,z; cin>>x>>y>>z;
        int sum = x +y+z;
        x = sum - 2ll*x;
        x = x * (sum - 2ll*y);
        x = x * (sum - 2ll*z);
        y = (4*sum);
        int gc = __gcd(x,y);
        cout<<x/gc<<"/"<<y/gc<<endl;



    }
    return 0;
}