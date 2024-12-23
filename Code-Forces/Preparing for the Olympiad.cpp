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
        int n; cin>>n;
        int arr[n],brr[n];
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i =0;i<n;i++)
        {
            cin>>brr[i];
        }
        int sum =0;
        for(int i =0;i<n;i++)
        {
            if((i+1)<n)
            {
                if(arr[i]>brr[i+1])
                {
                    sum+=arr[i]-brr[i+1];
                }
            }
        }
        cout<<sum+arr[n-1]<<endl;
    }
    return 0;
}

