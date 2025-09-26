#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test int t; cin>>t;
//#define endl '\n'
int main()
{
    fast
    test
    while(t--)
    {
        int n;cin>>n;
        string str;cin>>str;
        int i =0,j = n-1;
        if(str[i]=='s' || str[j]=='p')
        {
            cout<<"YES"<<endl;
            continue;
        }
        int dot =-1;
        for(;i<n;i++)
        {
            if(str[i] =='.') dot++;
            if(str[i]=='s') break;
        }
        cout<<i<<" "<<dot<<endl;
        if(n==(n-i+1+dot))
        {
            cout<<"YES"<<endl;
            continue;
        }
        dot = -1;
        for(;j>=0;j--)
        {
            if(str[j] =='.') dot++;
            if(str[j]=='p') break;
        }
        cout<<j<<" "<<dot<<endl;
        if(n==(n-j+1+dot))
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;

    }
    return 0;
}
