#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    map<int,int> mp;
    for(int i=1;i<=9;i++)
    {
        int q ; cin>>q;
        mp[i] = q;
    }
    bool l = false;
    string ptr = str,cmp = str;
    for(int i=0;i<n;i++)
    {
        int x = str[i] - '0';
        int y = mp[x];
        if(y>=x)
        {
            ptr[i] = y + '0';
            l = true;
        }
        else if(l)
        {
            if(ptr>cmp) cmp = ptr;
            ptr = str;
            l = false;
        }

    }
            if(ptr>cmp) cmp = ptr;
    str = cmp;
    cout<<str;
    return 0;
}
