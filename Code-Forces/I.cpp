#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"Humanity is doomed!"<<endl;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using vi = vector<int> ;
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
int sq(int n)
{
  int ans = sqrt(n);
  while((ans*ans) <= n) ans++;
  while((ans*ans) > n) ans--;
  return ans;
}
void pr(vi &arr,int n)
{
    for(int i =0;i<n;i++) cout<<arr[i]<<" "<<i<<endl;
    cout<<"___"<<endl;
}
signed main()
{
    OP
    int tc;
    cin >> tc;
    int cs = 1;
    while (tc--)
    {
        int n; cin>>n;
        unordered_map<int,int> mp;
        unordered_map<int,bool> vis;
        vi brr;
        for(int i=0;i<n;i++)
        {
          int x; cin>>x;
          mp[x] = i;
          // cout<<x<< " "<<i<<endl;
          brr.push_back(x);
        }
        // cout<<"___"<<endl;
        sort(brr.begin(),brr.end());
        int ind =0;
        bool l = false;
        // pr(brr,n);
        for(int i =0;i<n;i++)
        {
          if(mp[brr[i]] == i && vis[brr[i]]==false)
          {
            if(mp[brr[i]]>=ind)
            {
              ind = mp[brr[i]];
              l = true;
              break;
            }
          }
          ind = max(ind,mp[brr[i]]);
          vis[brr[i]] = true;
        }
        if(l) cout<< "Case " << cs++ << ": " <<  ind+1<<endl;
        else cout << "Case " << cs++ << ": " << "Humanity is doomed!" << endl;
    }
    return 0;
}