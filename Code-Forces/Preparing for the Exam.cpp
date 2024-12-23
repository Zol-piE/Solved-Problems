#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test int t; cin>>t;
#define endl '\n'
int main()
{
    fast
    test
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        string str(m,'0');
        int arr[m];
        unordered_set<int> brr;
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        for(int i =0;i<k;i++)
        {
            int x ; cin>>x;
            brr.insert(x);
        }
        if(k<(n-1))
        {
            cout<<str<<endl;
            continue;
        }
        if(k==n)
        {
            string ptr(m,'1');
            cout<<ptr<<endl;
            continue;
        }
        for(int i=0;i<m;i++)
        {
            if(brr.find(arr[i])==brr.end())
            {
                str[i]='1';
            }
        }
        cout<<str<<endl;
    }
    return 0;
}

