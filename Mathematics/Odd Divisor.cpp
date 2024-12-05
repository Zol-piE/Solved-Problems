#include<iostream>
#include<math.h>
using namespace std;
bool oddDiv(int long long x)
{
   return x && (!(x & (x - 1)));
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int long long  n;cin>>n;
        if(!oddDiv(n)) cout<<"yes"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
