#include<bits/stdc++.h>
using namespace std;
#define int long long

bool divisors(int n, set<int>& st) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            auto one = st.find(i);
            auto two = st.find(n / i);
            if (one == st.end() || two == st.end()) return false;
            st.erase(i);
            if (i != n / i) {
                st.erase(n / i);
            }
        }
    }
    return st.empty();
}

signed main() {
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> st;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            st.insert(a);
        }
        int num = (*st.begin()) * (*st.rbegin());
        set<int> pt;
        for(int i=2; i*i<=num; i++) {
            if(num % i == 0) {
                pt.insert(i);
                if(i != (num/i)) pt.insert(num/i);
            }
        }
        if(st == pt) {
            cout << num << endl;
        }
        else cout << -1 << endl;
        st.clear();
        pt.clear();
    }
    return 0;
}
