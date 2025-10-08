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
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,k; cin>>n>>k;
        vector<int> arr(n,0);
        for(int i =0;i<n;i++)
        {
        	cin>>arr[i];
        }
        int res = k ;
        if(k==4)
        {
            for(int i = 0;i<n;i++)
            {   
                if(!(arr[i]%k))
                {
                    res = 0;
                    break;
                }
                if(((arr[i] + (arr[i]%2)) % k )== 0)
                {
                    res = 1; 
                }
                arr[i] = min((k - (arr[i]%k)),arr[i]%2);
                
            }
            if(res!= 0){
            sort(arr.begin(),arr.end());
            res  =  min((arr[0]+arr[1]),res);
        }
    }
    else
    {
        for(int i = 0;i<n;i++)
        {   
            if(!(arr[i]%k))
            {
                res = 0;
                break;
            }
            res = min(res,k - (arr[i]%k));
        }
    }
    cout<<res<<endl;
}
return 0;
}

