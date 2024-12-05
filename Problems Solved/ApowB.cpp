#include<iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Fast exponentiation function
int pow(int a, int b) {
    int res = 1;
    while(b > 0) {
        if(b % 2 == 1) // Corrected: when b is odd
            res = (res * 1LL * a) % MOD; // Use long long multiplication
        a = (a * 1LL * a) % MOD; // Square the base
        b /= 2;
    }
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    // Exponentiation with mod
    int res1 = pow(a, b);
    int res2 = pow(b, a);

    // Calculate result and adjust for negative mod result
    int result = (res1 - res2 + MOD) % MOD;

//    cout << result << endl;
    cout<<((pow(a,b))- (pow(b,a)))<<endl;
    return 0;
}
