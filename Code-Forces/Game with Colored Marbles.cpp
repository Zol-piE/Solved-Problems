#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{




    int  t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int alice =0;
        unordered_map<int,int> mp;
//        unordered_set<int> st;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            mp[x]++;
        }
        n =0;
        for(auto x : mp)
        {
            if(x.second==1) {
                    n++;
            }
        }
//        n = st.size();
        if((n & 1)==0) alice += ( n/2);
        else alice += ( n/2) +1 ;
        int n2 = mp.size();
        alice *=2;
        if(n!=n2)
        {
            n2 -=n;
            alice +=n2;
        }
        cout<<alice<<endl;
    }

    return 0;
}


