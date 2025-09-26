#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    fast
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int con = 0;
        vector<int> arr;
        for(int i =0;i<n;i++)
        {
            string str; cin>>str;
            int len = str.length();
            arr.push_back(len);
        }
        for(int i =0;i<n;i++)
        {
            if((m - arr[i])>=0)
            {
                m -=arr[i];
                con++;
            }
            else break;
        }
        cout<<con<<endl;
    }
    return 0;
}

