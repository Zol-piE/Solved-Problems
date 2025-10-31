#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
const int MOD = 1e9 + 7;
#define OP ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    OP
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        vector<string> g(n);
        for (int i = 0; i < n; i++) cin >> g[i];

        bool hasBlack = false, bad = false;

        // check rows for ###
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (g[i][j] == '#') hasBlack = true;

                if (j + 2 < n && g[i][j] == '#' && g[i][j+1] == '#' && g[i][j+2] == '#')
                    bad = true;
            }
        }

        // check columns for ###
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i + 2 < n; i++)
            {
                if (g[i][j] == '#' && g[i+1][j] == '#' && g[i+2][j] == '#')
                    bad = true;
            }
        }

        if (!hasBlack) { yes; continue; }
        if (bad) { no; continue; }

        yes; // otherwise always possible
    }
    return 0;
}
