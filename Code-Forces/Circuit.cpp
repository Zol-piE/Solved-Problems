#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int one=0,zero=0;
        for(int i =1;i<=(2*n);i++)
        {
            int x ;cin>>x;
            if(x==1) one++;
            else zero++;
        }
        if(one<=n) cout<<one%2<<" "<<one<<endl;
        else cout<<one%2<<" "<<zero<<endl;
    }
    return 0;
}
