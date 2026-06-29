#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
using ll = long long;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;
#define rep(a, b) for (ll i = (a); i < (b); i++)
#define ZolpiE ios::sync_with_stdio(false), cin.tie(nullptr)
set<int> seg;
multiset<int> len;
void update(int x, int l)
{
    if (x == 0 || x == l)
        return;
    if (seg.count(x))
    {
        auto pos = seg.find(x);
        auto left = *prev(pos);
        auto right = *next(pos);
        len.erase(len.find(x - left));
        len.erase(len.find(right - x));
        len.insert(right - left);
        seg.erase(pos);
    }
    else
    {
        auto pos = seg.insert(x).first;
        auto left = *prev(pos);
        auto right = *next(pos);
        len.erase(len.find(right - left));
        len.insert(x - left);
        len.insert(right - x);
    }
}
signed main()
{
    ZolpiE;

    string str;
    cin >> str;

    int n;
    cin >> n;
    int l = str.size();
    seg.insert(0);
    seg.insert(l);
    for (int i = 1; i < l; i++)
    {
        if (str[i] != str[i - 1])
        {
            seg.insert(i);
        }
    }
    auto p = seg.begin();
    auto nxt = seg.begin();
    nxt++;
    while (nxt != seg.end())
    {
        len.insert((*nxt - *p));
        p = nxt;
        nxt++;
    }
    while (n--)
    {
        int x;
        cin >> x;
        x--;
        update(x, l);
        update(x + 1, l);
        cout << *len.rbegin() << " ";
    }
    cout << endl;
    return 0;
}
