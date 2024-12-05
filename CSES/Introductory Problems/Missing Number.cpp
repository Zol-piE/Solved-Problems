#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<bool> vect(n+1,true);
    for(int i=1;i<n;i++)
    {
        int x; cin>>x;
        vect[x] = false;
    }
    for(int i=1;i<=n;i++)
    {
        if(vect[i]==true)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
