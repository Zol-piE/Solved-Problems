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
void pr(vector<int> &arr,int n)
{
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
vector<int> prime_factors(int n) {
    vector<int> primes;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primes.push_back(i);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1) primes.push_back(n);
    return primes;
}
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        vector<int> arr(n,0);
        rep(0,n) cin>>arr[i];
        int gc =0;
        for(int i =0;i<n;i++)
        {
        	gc = __gcd(arr[i],gc);
        }
        vector<int> pf = prime_factors(gc);
        bool t = true;
        for(int i =2;i<=100;i++)
        {
        	bool l = true;
        	for(int x : pf)
        	{
        		if(i % x == 0) 
        		{
        			l = false;
        			break;
        		}
        	}
        	if(l)
        	{
        		cout<<i<<endl;
        		t = false;
        		break;
        	}
        }
        if(t) cout<<-1<<endl;
    }
    return 0;
}