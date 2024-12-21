#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
int main()
{
    fast
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        int j =0;
        for(;j<n;j++)
        {
            if(arr[j]!= 0) break;
        }
        if(j==n)
        {
            cout<<0<<endl;
            continue;
        }
        bool l = false,k = false;
        for(;j<n;j++)
        {
            if(arr[j]==0)
            {
                l = true;
            }
            else if(l == true && arr[j] != 0)
            {
                k = true;
                break;
            }
        }
        if(l && k)
        {
            cout<<2<<endl;
        }
        else cout<<1<<endl;
    }
    return 0;
}

