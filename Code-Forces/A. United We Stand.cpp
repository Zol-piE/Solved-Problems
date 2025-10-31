#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void pr(vector<int> &arr,int n)
{
    for(int i =0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
signed main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n; cin>>n;
        vector<int>arr,brr;
        vector<int> crr(n);
        for(int &x:crr) cin>>x;

        sort(crr.begin(),crr.end());
        arr.push_back(crr[0]);
        for(int i=1;i<n;i++)
        {
        	int x = crr[i];
        	bool l = true;
        	for(int j: arr)
        	{
        		if(j % x == 0)
        		{
        			arr.push_back(x);
        			l = false;
        			break;
        		}
        	}
        	if(l) brr.push_back(x);
         }
         int la = size(arr);
         int lb = size(brr);
         if(!la || !lb )
         {
         	cout<<-1<<endl;
         }
         else
         {
         	cout<<la<<" "<<lb<<endl;
         	pr(arr,la);
         	pr(brr,lb);
         }

    }
    return 0;
}