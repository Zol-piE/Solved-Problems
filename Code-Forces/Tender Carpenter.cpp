#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test int t; cin>>t;
bool fun(int x,int y)
{
    if((x*2)<=y) return false;
    if((y*2)<=x) return false;
    if((x+y)<=x || (x+y)<=y) return false;
    return true;
}
int main()
{
    fast
    test
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int i =0;
        bool l = true;
        for(int j =1;j<n;j++)
        {
            if(fun(arr[i],arr[j])==true)
            {
                cout<<"Yes"<<endl;
                l = false;
                break;
            }
            i++;
        }
        if(l) cout<<"NO"<<endl;
    }
    return 0;
}
