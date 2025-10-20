#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// ✅ Debug printing helper
void pr(vector<int> &arr,int n)
{
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

// ✅ Get unique prime factors of n (optimized 6k±1 form)
vector<int> getPrimeFactors(int n)
{
    vector<int> primes;
    map<int,bool> mp;

    if (n <= 1) return primes;

    while (n % 2 == 0) {
        if (!mp[2]) { primes.push_back(2); mp[2] = true; }
        n /= 2;
    }
    while (n % 3 == 0) {
        if (!mp[3]) { primes.push_back(3); mp[3] = true; }
        n /= 3;
    }

    for (int i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            if (!mp[i]) { primes.push_back(i); mp[i] = true; }
            n /= i;
        }
        while (n % (i + 2) == 0) {
            if (!mp[i + 2]) { primes.push_back(i + 2); mp[i + 2] = true; }
            n /= (i + 2);
        }
    }

    if (n > 3 && !mp[n]) {
        primes.push_back(n);
        mp[n] = true;
    }

    return primes;
}

// ✅ Add prime factors of n to freq map
bool printPrime(int n, vector<int> &freq)
{
    vector<int> p = getPrimeFactors(n);
    for (int x : p)
    {
        freq[x]++;
        if (freq[x] > 1) return true;
    }
    return false;
}

// ✅ Remove prime factors of n from freq map
void printPrimeD(int n, vector<int> &freq)
{
    vector<int> p = getPrimeFactors(n);
    for (int x : p)
    {
        freq[x]--;
    }
}

// ✅ Core logic
int solve(vector<int> &arr,int &n)
{
    vector<int> freq((2e5)+1,0);

    // Step 1: Check for any common prime factor directly (cost 0)
    for(int i =0;i<n;i++)
    {
        if(arr[i] !=1  && printPrime(arr[i],freq)) return 0;
    }

    // Step 2: Try adding +1 to see if we can make gcd>1 (cost 1)
    for(int i =0;i<n;i++)
    {
        if(arr[i] == 1) continue;

        // Remove current number's primes
        printPrimeD(arr[i],freq);

        // Try (a[i] + 1)
        int temp = arr[i] + 1;
        if(printPrime(temp,freq)) return 1;

        // Undo the addition effect
        printPrimeD(temp,freq);

        // Restore original primes
        printPrime(arr[i],freq);
    }

    // Step 3: Otherwise answer = 2
    return 2;
}

// ✅ Main driver
signed main()
{
    OP;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin >> n;
        vector<int> arr(n,0);
        bool l = true;
        rep(0,n)
        {
            cin >> arr[i];
            if(arr[i] == 1) l = false;
        }

        vector<int> brr(n,0);
        rep(0,n) cin >> brr[i]; // unused but part of input

        if(l) cout << 2 << endl;
        else cout << solve(arr,n) << endl;
    }
    return 0;
}
