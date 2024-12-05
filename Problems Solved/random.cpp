#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dq.push_front(n-1);
    for(int i=n-2;i>=2;i++)
    {
        if(arr[dq.front()]%arr[i]!=0)
        {
            dq.push_front(i);
        }
    }
    return 0;
}
