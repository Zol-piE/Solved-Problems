#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
using ll = long long;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;
#define rep(a, b) for (ll i = (a); i < (b); i++)
#define ZolpiE ios_base::sync_with_stdio(false), cin.tie(nullptr)
using vi = vector<int>;
ll binGCD(ll a, ll b)
{
    if (a == 0 || b == 0)
        return a | b;
    ll shift = __builtin_ctzll(a | b);
    a >>= __builtin_ctzll(a);
    do
    {
        b >>= __builtin_ctzll(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return (a << shift);
}
signed main()
{
    ZolpiE;

    int tc;
    cin >> tc;
    while (tc--)
    {

        ll a, b;
        cin >> a >> b;
        ll lcm = ((a * b) / binGCD(a, b));
        if (lcm == a || lcm == b)
            lcm *= 2;
        cout << lcm << endl;
    }

    return 0;
}
