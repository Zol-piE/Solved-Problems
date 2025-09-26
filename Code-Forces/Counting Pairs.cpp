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
        int n,x,y; cin>>n>>x>>y;
        vector<int> arr(n);
        long long int sum =0;
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end());
        int con =0;
        for(int i =0;i<n;i++)
        {
            for(int j =i+1;j<n;j++)
            {
                long long int sum2 = arr[i]+arr[j];
                sum2 = sum - sum2;
                if(sum2>=x && sum2<= y)
                {
                    con++;
                }
                else if(sum2<x) break;
            }
        }
        cout<<con<<endl;
    }
    return 0;
}

