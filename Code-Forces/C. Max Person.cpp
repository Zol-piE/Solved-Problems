        #include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ii int
#define int long long
#define yes cout << "YES\n";
#define no  cout << "NO\n";

const int MOD = 1e9 + 7;
const long long INF = LLONG_MAX >> 1;

#define rep(a,b) for(int i = (a); i < (b); i++)
#define ZolpiE ios_base::sync_with_stdio(false); cin.tie(nullptr);

using vi = vector<int>;

#define N 5
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

using ul = unordered_map<int,int,custom_hash>;
using ui = unordered_map<ii,int,custom_hash>;

int sq(int n) {
    long double r = sqrtl((long double)n);
    int ans = (int)r;
    while ((__int128)ans * ans > n) ans--;
    while ((__int128)(ans + 1) * (ans + 1) <= n) ans++;
    return ans;
}


void pr(vi &arr, int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

vi p2(N,0);
ui p3;

solve(int sum ,int cost, ii i )
{
	sum += p2[i];
	if(i < 0 || i>=N) return ;
	if(sum == cost)
	{

	}
	if(sum > cost)
	{

	}
	


}

signed main() {
    ZolpiE

    for(int i =0;i<N;i++)
    {
    	p2[i] = pow(2,i+1);
    }

    p3[p2[N-1]] = p2[N-1];

    for(int i =N-2;i>=0;i--)
    {
    	p3[p2[i]] = p2[i] + p3[p2[i+1]];
    }

    pr(p2,N);
    for(auto &x : p3)
    {
    	cout<<x.first<<" "<<x.second<<endl;
    }
    int tc;
    cin >> tc;
    while (tc--) {
    	int n,m; cin>>n>>m;

    }

    return 0;
}

