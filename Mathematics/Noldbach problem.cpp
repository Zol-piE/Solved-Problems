#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> prime(int n)
{
    vector<bool> arr(n+1,true);
    vector<int>pr;
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]){
        for(int j = i*i;j<=n;j+=i)
        {
            arr[j] = false;
        }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]) pr.push_back(i);
    }
    return pr;
}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>pr;
    pr = prime(a);
//    for(auto x : pr) cout<<x<< " ";
//    cout<<endl;
    for(int i=0;i<pr.size()-1;i++)
    {
        int x = pr[i]+pr[i+1]+1;
        if(x > pr.back() || b<0 ) break;
        else if(binary_search(pr.begin()+2,pr.end(),x)) b--;
    }
    if(b<=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
