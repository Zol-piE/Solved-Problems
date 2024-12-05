#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    fast
    int t ;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int con =1,sq=1;
        int x,pSum =0; cin>>x;
        for(int i=1;i<n;i++)
        {
            cin>>x;
            pSum +=x;
            while(pSum >= (8*sq))
            {
                pSum -= (8*sq);
                sq++;
            }
            if(pSum ==0) con++;

        }
        cout<<con<<endl;
    }
    return 0;
}

