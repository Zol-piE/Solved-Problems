#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        int org =k;
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            pq.push(x);
        }
        while( k>0 && !pq.empty())
        {
            k = k - pq.top();
            if(k<0)
            {
                k +=pq.top();
                break;
            }
            pq.pop();
        }
        int sum =0;
        if(k>0)
        {
            sum +=k;
        }
        cout<<sum<<endl;
    }
    return 0;
}

