#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;
#define rep(a,b) for(int i =a;i<b;i++)
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int dp(int a, string &str, int n, map<int,int> &mem)
{
	if(a <= 0) return 0;
	if(mem.find(a) != mem.end()) return mem[a];
	int ans = 0;
	int t = a;
	while(a > 0)
	{
		int temp = a;
		if(mem.find(a) != mem.end()) return mem[t] =  ans + mem[a];
		for(int i = 0; i < n && a > 0; i++)
		{
			if(str[i] == 'A') a = a - 1;
			else a = a / 2;
			ans++;
		}
		mem[temp] = ans;
	}
	return mem[t] = ans;
}

signed main()
{
    OP
    int tc;
    cin >> tc;
    map<int,int> mem;
    while (tc--)
    {
        int n, q; cin >> n >> q;
        string str; cin >> str;

        mem.clear();
        mem[0] = 0;

        for(int i = 1; i <= q; i++)
        {
        	int a; cin >> a;
        	cout << dp(a, str, n, mem) << endl;
        }
    }
    return 0;
}
