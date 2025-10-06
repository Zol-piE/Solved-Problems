#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
const int MOD = 1e9 + 7;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main()
{
    
        int a ,b ; cin>>a>>b;
        int sum1 = a % MOD ;
        sum1 = ((int)pow(sum1,b))%MOD;
        int sum2 = b % MOD ;
        sum2 = ((int)pow(sum2,a)) % MOD;
        cout<<sum1-sum2<<endl;
        
    
    return 0;
}