#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int num; cin>>num;
        int i;
        for( i=2;i*i<=num;i++)
        {
            if(num%i>0)
            {
                if(i!=(num-(num%i)) ) break;
            }
        }
        cout<<i<<" "<<(num-(num%i))<<endl;
    }
    return 0;
}

