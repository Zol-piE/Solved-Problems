#include <bits/stdc++.h>
using namespace std;
//#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<int> opFactors(int n, int &k)
{
    vector<int> vec;
    k = 0;

    while (n % 2 == 0)
    {
        if (vec.empty() || vec.back() != 2)
        {
            vec.push_back(2);
            k++;
        }
        n /= 2;
    }
    while (n % 3 == 0)
    {
        if (vec.empty() || vec.back() != 3)
        {
            vec.push_back(3);
            k++;
        }
        n /= 3;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            if (vec.empty() || vec.back() != i)
            {
                vec.push_back(i);
                k++;
            }
            n /= i;
        }
        while (n % (i + 2) == 0)
        {
            if (vec.empty() || vec.back() != (i + 2))
            {
                vec.push_back(i + 2);
                k++;
            }
            n /= (i + 2);
        }
    }

    if (n > 3)
    {
        if (vec.empty() || vec.back() != n)
        {
            vec.push_back(n);
            k++;
        }
    }

    return vec;
}
vector<int> divisors(int n,int &k)
{
    int i;
    vector<int> vec;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            k++;
        }
    }
    for(int i = sqrt(n);i>=1;i--)
    {
        if(n%i==0)
        {
            vec.push_back(n/i);
            k++;
        }
    }
    return vec;
}
signed main()
{
    OP;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, n;
        cin >> a >> n;
        int s = 0;
        vector<int> vec = divisors(n,s);
//        for(int x : vec) cout<<x<<" ";
//        cout<<endl<<s<<endl;
        int res = -1;
        for(int i = s-1;i>=0;i--)
        {
            int m = (a * vec[i]) + (n / vec[i]) ;
            if((m %2) == 0)
            {
                res= max(m , res);
            }
            if(res!=(-1)) break;
        }
        cout<<res<<endl;
    }
}
