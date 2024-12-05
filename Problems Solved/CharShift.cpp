#include<iostream>
using namespace std;
int m = INT_MIN;
int check(int num,int k,int maax )
{
    if((num-maxx) == 0 ) return 0;
    if((maax - num)%3 == 0)
    {
        return ((maax - num)/3);
    }

}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        char ch;
        for(int i=0;i<n;i++)
        {
            cin>>ch;
            arr[i] = ch-96;
            m=max(arr[i],m);
        }



    }
    return 0;
}
