#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test int t; cin>>t;
int main()
{
    fast
    test
    while(t--)
    {
        int n,a,b; cin>>n>>a>>b;
        int d = abs(a-b-1);
        if(d%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
