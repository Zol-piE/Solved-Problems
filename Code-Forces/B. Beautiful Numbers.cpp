#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define yes cout << "YES\n";
#define no  cout << "NO\n";

using ll = long long;

#define ZolpiE ios_base::sync_with_stdio(false); cin.tie(nullptr);

using vi = vector<int>;

vector<int> sumDigit(ll x)
{
    string s = to_string(x);
    int n = (int)s.size();

    vector<int> a(n + 1, 0);   // a[0] = digit sum, a[1..n] = digits (MSD..LSD)
    for (int i = 0; i < n; i++) {
        int d = s[i] - '0';
        a[0] += d;
        a[i + 1] = d;
    }
    return a;
}

signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    while (tc--) {
        ll x;
        cin >> x;

        vector<int> arr = sumDigit(x);
        int n = (int)arr.size(); // = digits + 1

        if (arr[0] <= 9) {
            cout << 0 << endl;
            continue;
        }

        // Build maximum possible reductions per move:
        // - leading digit (arr[1]) can be reduced to at least 1 => reduction = d-1
        // - other digits can be reduced to 0 => reduction = d
        vector<int> red;
        red.reserve(n - 1);

        red.push_back(arr[1] - 1);          // leading digit
        for (int i = 2; i < n; i++) red.push_back(arr[i]); // other digits

        sort(red.begin(), red.end(), greater<int>());

        int need = arr[0] - 9;
        int got = 0, c = 0;
        for (int r : red) {
            if (got >= need) break;
            got += r;
            c++;
        }

        cout << c << endl;
    }

    return 0;
}
