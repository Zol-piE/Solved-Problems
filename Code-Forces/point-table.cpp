#include <bits/stdc++.h>
using namespace std;

// Function to compute a custom hash (useful for unordered_map with large keys)

// Prints a vector of integers

// Calculates a specific formula (like a pairing function)
long long canton(long long x, long long y) {
    return ((x + y) * (x + y + 1)) / 2 + max(x, y);
}

// Checks if the given triplet satisfies special conditions
bool solve(vector<long long>& arr) {
    long long c = arr[0] + arr[1] + arr[2];

    if (c == 6 || c == 9)
        return true;

    c = canton(arr[1], arr[2]);

    if (arr[0] == 6) {
        if (c == 9 || c == 4)
            return true;
    } else if (arr[0] == 4) {
        if (c == 13 || c == 14 || c == 8)
            return true;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    for (int i = 1; i <= tc; i++) {
        vector<long long> arr(3);
        for (auto& x : arr) cin >> x;

        sort(arr.begin(), arr.end(), greater<long long>());

        if (solve(arr))
            cout << "Case " << i << ": perfectus" << endl;
        else
            cout << "Case " << i << ": invalidum" << endl;
    }

    return 0;
}
