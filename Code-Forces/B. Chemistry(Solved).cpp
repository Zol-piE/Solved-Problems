#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc; 
    if(!(cin >> tc)) return 0;
    while (tc--) {
        int n, k; 
        cin >> n >> k;


        vector<int> cnt(256, 0);
        for (int i = 0; i < n; ++i) {
            char ch; 
            cin >> ch;
            cnt[(unsigned char)ch]++;
        }

        int odd_cnt = 0;
        for (int c : cnt) if (c & 1) ++odd_cnt;

        cout << (odd_cnt <= k + 1 ? "YES" : "NO") << "\n";
    }
    return 0;
}
