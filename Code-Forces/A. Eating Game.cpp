#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ZolpiE ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> arr(n, 0), res(n, 0);

        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        for (int i = 0; i < n; i++) {
            int rem = sum;
            int j = i;
            vector<int> brr = arr;
            int last = -1;

            while (rem > 0) {
                if (brr[j] > 0) {
                    brr[j]--;
                    rem--;
                    last = j;
                }
                j = (j + 1) % n;
            }

            res[last] = 1;
        }

        int ans = 0;
        for (int k = 0; k < n; k++) ans += res[k];
        cout << ans << endl;
    }
    return 0;
}
