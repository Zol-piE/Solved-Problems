#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
int main()
{
    fast
    int t;cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        unordered_map<int,int>mp,sp;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            mp[x%k]++;
            sp[x%k] = i+1;
        }
        int l = false;
        for(auto it: mp)
        {
            if(it.second==1)
            {
                cout<<"YES"<<endl;
                cout<<sp[it.first]<<endl;
                l = true;
                break;
            }
        }
        if(!l) cout<<"NO"<<endl;
    }
    return 0;
}

