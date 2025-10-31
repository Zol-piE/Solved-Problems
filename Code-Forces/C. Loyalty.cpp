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

signed main()
{
    OP
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n,x; cin>>n>>x;
        vector<int> arr(n);
        for(int &v : arr) cin >> v;

        sort(arr.rbegin(), arr.rend()); // sort descending

        int prev = 0, bonus = 0, sum = 0;
        rep(0, n)
        {
            sum += arr[i];
            int now = sum / x;
            if(now > prev)
            {
                bonus += (now - prev) * arr[i];
            }
            prev = now;
        }

        cout << bonus << endl;
        pr(arr, n);
    }
    return 0;
}
