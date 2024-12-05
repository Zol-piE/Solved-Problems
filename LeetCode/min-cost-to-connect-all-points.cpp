#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int dis(vector<int>&a,vector<int>&b)
{
    return abs(a[0] - b[0])+ abs(a[1] - b[1]);
}
void addEdge(vector<vector<int>> &gp,int i ,int j,int dis)
{
    gp[i][j]= dis;
    gp[j][i]= dis;
}
void print(vector<vector<int>> &gp,int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(int j =0;j<n;j++)
        {
            cout<<gp[i][j]<<" ";
        }
        cout<<endl;
    }
}
int minCost(vector<vector<int>> &gp,int n)
{
    vector<bool>vis(n,false);
    vector<int> dis(n,INT_MAX);
    dis[0]=0;
    int res =0;
    for(int c =0;c<n;c++)
    {
        int u = -1;
        for(int i =0;i<n;i++)
        {
            if(vis[i]==false && (u == -1 || dis[i]<dis[u]))
            {
                u = i;
            }
        }
        vis[u] = true; res +=dis[u];
        for(int i =0;i<n;i++)
        {
            if(gp[u][i]!=0 && vis[i]==false)
            {
                dis[i] =  min(gp[u][i],dis[i]);
            }
        }
    }
    return res;
}
int main()
{
    fast
    vector<vector<int>> arr = {{3,12},{-2,5},{-4,1}};
    int  n = arr.size();
    vector<vector<int>> gp(n, vector<int>(n, 0));
    for(int i =0;i<n;i++)
    {
        cout<<arr[i][0]<< " "<<arr[i][1]<<" -> ";
        for(int j = i+1;j<n;j++)
        {
          cout<<arr[j][0]<< " "<<arr[j][1]<<" - ";
          addEdge(gp,i,j,dis(arr[i],arr[j]));
        }
        cout<<endl;
    }
    print(gp,n);
    cout<<minCost(gp,n)<<endl;
    return 0;
}
