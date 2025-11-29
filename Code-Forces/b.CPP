#include <bits/stdc++.h>
using namespace std;

void pr(vector<char> &arr, int n) {
    for (int i = 0; i < n; i++) cout << arr[i];
    cout << '\n';
}

void fill_pal(vector<char> &str, int a, int b, char f, char s, int n)
{
    int i = 0, j = n - 1;
    while (i < j && a > 0) {
        str[i++] = f;
        str[j--] = f;
        a -= 2;
    }
    while (i < j && b > 0) {
        str[i++] = s;
        str[j--] = s;
        b -= 2;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int a, b;
        cin >> a >> b;

        // impossible for any palindrome if both odd
        // also impossible to have 2 distinct palindromes if a==1 or b==1
        if ((a % 2 == 1 && b % 2 == 1) || a == 1 || b == 1) {
            cout << -1 << '\n';
            continue;
        }

        int n = a + b;
        int A = a, B = b;  // save original

        // First palindrome
        vector<char> s1(n, '0');
        if (n & 1) {
            int mid = n / 2;
            if (a & 1) { s1[mid] = 'a'; a--; }
            else       { s1[mid] = 'b'; b--; }
        }
        fill_pal(s1, a, b, 'a', 'b', n);
        pr(s1, n);

        // Second palindrome
        vector<char> s2(n, '0');
        a = A; b = B;  // restore
        if (n & 1) {
            int mid = n / 2;
            if (a & 1) { s2[mid] = 'a'; a--; }
            else       { s2[mid] = 'b'; b--; }
        }
        fill_pal(s2, b, a, 'b', 'a', n);
        pr(s2, n);
    }
    return 0;
}
