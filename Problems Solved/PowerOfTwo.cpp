#include<iostream>
using namespace std;
bool pow(int n)
{


    if(n==1) return true;
    else if(n%2!=0|| n==0) return false;
    return pow(n/2);
}
int main()
{
    int n ; cin>>n;
    cout<<pow(n);
}
