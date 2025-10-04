#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
signed main()
{
    int sum = 15;
    for(int i =1;i<=4;i++)
    {
    	int x; cin>>x;
    	sum -=x ;
    }
    cout<<sum<<endl;
    return 0;
}