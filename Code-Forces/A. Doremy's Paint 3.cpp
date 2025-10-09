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
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        map<int,int> mp;
        for(int i =0 ; i<n;i++)
        {
        	int x; cin>>x;
            mp[x]++;

        }
        if(n==2) {yes continue; }
        if(mp.size()>2) no
        else if(mp.size()==1) yes
        else
        {
            vector<int>freq(2,0);
            int i =0;
            for(auto x : mp)
            {
                freq[i++] = x.second;
            }
            cerr<<tc<<" "<<freq[0]<<' '<<freq[1]<<endl;
            if(freq[0]> freq[1]) swap(freq[0],freq[1]);
            if((n&1) && (freq[1] - freq[0]) ==1 ) yes
            else if((freq[1] - freq[0]) == 0) yes
            else no;
        }
    }
    return 0;
}