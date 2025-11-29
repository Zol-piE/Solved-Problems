#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long;

void solve_case() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end());

    vector<ll> odd, ev;
    for (ll x : a) {
        if (x & 1) odd.push_back(x);
        else ev.push_back(x);
    }

    // CASE 1: Two evens → always YES
    if (ev.size() >= 2) {
        cout << ev[0] << " " << ev[1] << endl;
        return;
    }

    // CASE 2: One even → try modulo using it
    if (ev.size() == 1) {
        ll e = ev[0];
        for (ll x : odd) {
            if (x > e && ((x % e) % 2 == 0)) {
                cout << e << " " << x << endl;
                return;
            }
        }
    }

    // CASE 3: Only odd numbers
    int m = odd.size();
    if (m <= 1) {
        cout << -1 << endl;
        return;
    }

    sort(odd.begin(), odd.end());
    ll V = odd.back();
    int limit = log2(V) + 3;
    int k = min(m, limit);

    // Check all pairs among first k odd numbers
    for (int i = 0; i < k-1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (((odd[j] % odd[i]) % 2) == 0) {
                cout << odd[i] << " " << odd[j] << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) solve_case();

    return 0;
}
