#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<bool> vis(50,true),num(101,true);
        int n;
        int range =3;
        cin>>n;
        vector<int> vect(n+1);
        vect[1] = 2;
        vis[0]=true;
        for(int i=2; i<=n; i++)
        {
            for(; range<=100; range++)
            {
                int m = range%i;
                if(vis[m])
                {
                    vect[i] = range;
                    vis[m] = false;
                    range++;
                    break;
                }
            }
        }
        for(int i=1; i<=n; i++) cout<< vect[i]<<" ";
        cout<<endl;
    }




return 0;
}
