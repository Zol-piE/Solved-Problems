#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>vect(n);
        for(int i=0;i<n;i++)
        {
            cin>>vect[i];
        }
        int mi = *min_element(vect.begin(),vect.end());
        int ma = *max_element(vect.begin(),vect.end());
        cout<<(ma-mi)*(n-1)<<endl;
        vect.clear();
    }
    return 0;
}
