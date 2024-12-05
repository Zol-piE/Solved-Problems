#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    fast
    int t;cin>>t;
    while(t--)
    {
    unordered_map<char,int> mp;
        int n; cin>>n;
        string str ; cin>>str;
        for(int i=0;i<n;i++)
        {
            mp[str[i]]++;
        }
        if(mp.size()==1)
        {
            cout<<str<<endl;
            continue;
        }
        int mi = INT_MAX,ma = INT_MIN;
        char cmax = '\0',cmin='\0';

        for(auto x : mp)
        {
            if(mi>x.second)
            {
                mi = x.second;
                cmin = x.first;
            }
            if(x.second>ma)
            {
                ma = x.second;
                cmax = x.first;
            }
        }
        if(cmax==cmin)
        {
            auto x = mp.begin();
            x++;
            cmin = x->first;

        }
        for(int i =0;i<n;i++)
        {
            if(str[i]==cmin)
            {
                str[i] = cmax;
                break;
            }
        }
        cout<<str<<endl;

        cout<<endl;
    }
    return 0;
}

