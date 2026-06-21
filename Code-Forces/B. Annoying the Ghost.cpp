#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";

using ll = long long;

const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

#define rep(a, b) for (ll i = (a); i < (b); i++)
#define ZolpiE                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)

using vi = vector<int>;

struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
using ui = unordered_map<int, int, custom_hash>;
ll sq(ll n)
{
    long double r = sqrtl((long double)n);
    ll ans = (ll)r;
    while ((__int128)ans * ans > n)
        ans--;
    while ((__int128)(ans + 1) * (ans + 1) <= n)
        ans++;
    return ans;
}

void pr(vi &arr, int n)
{
    for (ll i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void inputarray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

signed main()
{
    ZolpiE;

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0), brr(n, 0);
        inputarray(arr, n);
        inputarray(brr, n);
        set<int> st(brr.begin(), brr.end());
        unordered_map<int, int, custom_hash> mp;
        for (int i = 0; i < n; i++)
        {
            int x = *(st.lower_bound(arr[i]));
            mp[x] = arr[i];
            // cout << x << " " << mp[x] << endl;
            st.erase(x);
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > brr[i])
            {
                int k = 0, x = mp[brr[i]];

                for (; k < n; k++)
                {
                    if (arr[k] == x)
                        break;
                }
                while (k > i)
                {
                    swap(arr[k], arr[k - 1]);
                    k--;
                    c++;
                }
            }
        }
        bool l = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > brr[i])
            {
                l = true;
                break;
            }
        }
        if (l)
            c = -1;
        cout << c << endl;
    }

    return 0;
}
