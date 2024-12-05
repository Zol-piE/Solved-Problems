#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;cin>>s;

        int x,y; x=y=0;
        while(x<a && y<b )
        {
             for(int i=0;i<n;i++)
            {
            if(s[i]=='N')
            {
                y++;
            }
            else if(s[i]=='E')
            {
                x++;
            }
            else if(s[i]=='S')
            {
                y--;
            }
            else if(s[i]=='W')
            {
                x--;
            }
            if(x==a&&y==b) break;
           }
           if(x==0&&y==0||(x<0 || y<0)) break;
        }

        if(x==a&&y==b) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
