#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
void addEdge(vector<vector<int>> &gp,vector<int> &indeg,int des,int src)
{
    gp[src].push_back(des);
    gp[des].push_back(src);
    indeg[src]++;
    indeg[des]++;
}
void dfs(vector<vector<int>>&gp,vector<int> &vis,int src)
{

}
void dfs_dis(vector<vector<int>> &gp,int n)
{
    vector<bool> vis(n,false);
    int con =0;
    for(int i=1;i<n;i++)
    {
        if(vis[i]==false)
        {

        }
    }
}
int main()
{
    fast
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        n++;
        vector<vector<int>>gp(n);
        vector<int> indeg(n,0);
        for(int i =2;i<n;i++)
        {
            int x,y; cin>>x>>y;
            addEdge(gp,indeg,src,des);
        }
        int large ,i1; large = i2 =-1;
        for(int i=1;i<n;i++)
        {
            if(indeg[i]>large)
            {
                large = indeg[i];
                i1 = i;
            }
        }

    }
    return 0;
}
