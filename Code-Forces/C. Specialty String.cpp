#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define yes cout << "YES\n";
#define no  cout << "NO\n";

#define ZolpiE ios_base::sync_with_stdio(false); cin.tie(nullptr);

signed main() {
    ZolpiE

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (!st.empty() && st.top() == str[i]) st.pop();
            else st.push(str[i]);
        }

        if (st.empty()) yes
        else no
    }

    return 0;
}
