#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void pr(vector<int> &arr,int n)
{
    for(int i =1;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        n++;
        vector<int> arr(n,0);
        rep(1,n) cin>>arr[i];

        vector<int> num(n,1);

        for(int i =2;i<n;i++) num[i] = i;
        
        vector<int> pSum(n,0);
        pSum[1] = num[1];
        rep(2,n)
        {
            pSum[i] = num[i] + pSum[i-1];
        }

        int c = 0;
        for(int i =1;i<n;i++)
        {
            if((pSum[i] - arr[i]) > 0)
            {
                c++;
                num[i] = arr[i] - arr[i-1];
            }
        }
        if(c==1) num[n-1] = pSum[n-1] - arr[n-1];
        pr(num,n);


    }
    return 0;
}