#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n; cin>>n;
    if(n<0) n=abs(n);
    double num = log3(n);
    int num2 = log2(n);
    cout<<num<<" "<<num2<<endl;
    if(num==num2) cout<<"YO"<<endl;
    return 0;
}
