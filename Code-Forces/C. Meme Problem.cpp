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
        int d; cin>>d;
        bool l = true;
        if(d==1) 
        {
        	cout << fixed << setprecision(9) << (double)d << " " << (double)(d) << endl;
        	continue;
        }
        for(int i =2;i<=d;i++)
        {
        	if(d == ((d/i)+i))
        	{
        		cout<<"Y ";
        		cout << fixed << setprecision(9) << ((double)i - 0.000001) << " " << (double)(d - i + 0.000001) << endl;
        		l = false;
        		break;

        	}
        }
        if(l) cout<<"N"<<endl;
    }
    return 0;
}