#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

/*
    Kadane's Algorithm to find the maximum sum of a contiguous subarray.
    It works by maintaining a running sum (`pSum`) and updating the result (`res`) whenever
    a new maximum is found. Negative sums are ignored by resetting `pSum` to the current value.
*/
long long int kadaneAlgo(vector<int> &arr, int n) {
    if (n == 0) return 0; // Handle empty array case

    long long int res = arr[0], pSum = arr[0];
    for (int i = 1; i < n; i++) {
        pSum = max(pSum + arr[i], (long long int)arr[i]);
        res = max(res, pSum);
    }
    return res;
}

int main() {
    fast
    int n;
    cin >> n;
    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << kadaneAlgo(arr, n) << endl;
    return 0;
}
