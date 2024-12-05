#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char ch;
        int arr[] ={0,0,0,0,0,0,0};
        for(int i=0;i<n;i++)
        {
            cin>>ch;
            if(ch=='A') arr[0]++;
            else if(ch=='B') arr[1]++;
            else if(ch=='C') arr[2]++;
            else if(ch=='D') arr[3]++;
            else if(ch=='E') arr[4]++;
            else if(ch=='F') arr[5]++;
            else if(ch=='G') arr[6]++;
        }
        for(int i=0;i<m;i++)
        {
            arr[0]--;
            arr[1]--;
            arr[2]--;
            arr[3]--;
            arr[4]--;
            arr[5]--;
            arr[6]--;
        }
        int sum=0;
        for(int i=0;i<7;i++)
        {
            if(arr[i]<0)
            {
                sum+=abs(arr[i]);

            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
