#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test int t; cin >> t;

signed main() {
    fast
    test
    while(t--) {
        long long n;
        cin >> n;
        long long arr[3];
        for(int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        long long totalCycleSum = arr[0] + arr[1] + arr[2];
        long long fullCycles = n / totalCycleSum;
        long long sum = fullCycles * totalCycleSum;
        long long position = fullCycles * 3;
        if(sum>=n) {
                cout<<position<<endl;
                continue;
        }
        for(int i = 0; i < 3; i++) {
            sum += arr[i];
            position++;
            if(sum >= n) {
                cout << position << endl;
                break;
            }
        }
    }
    return 0;
}
