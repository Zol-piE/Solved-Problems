#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int m = n/2;
        n=n-m;
        for(int i=1;i<=n;i++) cout<<0;
        if(m!=0){
                cout<<1;
        for(int i=1;i<=(m-1);i++) cout<<0;
        }

        cout<<endl;
    }
    return 0;
}
