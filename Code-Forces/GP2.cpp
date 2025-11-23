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
    int n,m; cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m,0));
    vi r(n,0),c(m,0);
    for(int i =0;i<n;i++)
    {
     for(int j =0;j<m;j++)
     {
      cin>>arr[i][j];
      r[i] = r[i]^arr[i][j];
      c[j] = c[j]^arr[i][j];

    }
  }
        // for(int i =0;i<n;i++)
        // {
        // 	for(int j =0;j<m;j++)
        // 	{
        // 		cout<<arr[i][j]<<" ";
        // 	}
        // 	cout<<endl;
        // }
        // pr(r,n);
        // pr(c,m);
  int rm = 0;
  vi Armi;
  int mx =*max_element(r.begin(),r.end());
  for(int i =0;i<n;i++)
  {
   if(r[i] >= mx)
   {
    mx = r[i];
    rm++;
    Armi.push_back(i);
  }
}
int cm = 0;
vi Acmi;
mx =*max_element(c.begin(),c.end());
for(int i =0;i<m;i++)
{
 if(c[i] >= mx)
 {
  mx = c[i];
  cm++;
  Acmi.push_back(i);
}
}
int rsum = INT_MAX;
for(int i =0;i<rm;i++)
{
  int rmi = Armi[i];
  for(int j =0;j<cm;j++)
  {

    int cmi = Acmi[j];
    int a = r[rmi],b = c[cmi];
    int rxor =  r[rmi] ^ arr[rmi][cmi];
    r[rmi] = rxor;
    int cxor = c[cmi] ^ arr[rmi][cmi];
    c[cmi] = cxor;
        // cout<<rxor<< " "<<cxor<<endl;
    int ans = max(rxor,cxor);
    r[rmi] = ans ^ r[rmi];
    c[cmi] = ans ^ c[cmi];
        // pr(r,n);
        // pr(c,m);
    int sum = 0;

    for(int i=0;i<n;i++) sum+=r[i];

    for(int i=0;i<m;i++) sum+=c[i];

    rsum = min(rsum,sum);
    r[rmi] =a;
    c[cmi] =b;
    }
  }
  cout<<rsum<<endl;
        // cout<<rmi<<" "<<cmi<<endl;

}
return 0;
}