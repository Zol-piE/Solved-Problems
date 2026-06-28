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
void pr(vi &arr, int n)
{
    for (ll i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void inputarray(vector<pair<int, int>> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
}
signed main()
{
    ZolpiE;

    int tc;
    cin >> tc;
    while (tc--)
    {

        int n, c;
        cin >> n >> c;
        vector<pair<int, int>> arr(n), brr(n);
        inputarray(arr, n);
        inputarray(brr, n);
        int sum1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first < brr[i].first)
            {
                sum1 = INT_MAX;
                break;
            }
            else if (arr[i].first > brr[i].first)
            {
                sum1 += (arr[i].first - brr[i].first);
            }
        }
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        int sum = 0;
        bool l = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].first < brr[i].first)
            {
                sum = -1;
                break;
            }
            else if (arr[i].first > brr[i].first)
            {
                sum += (arr[i].first - brr[i].first);
            }
            if (l == false && arr[i].second != brr[i].second)
            {
                l = true;
                sum += c;
            }
        }
        cout << min(sum1, sum) << endl;
    }

    return 0;
}
