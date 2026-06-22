#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
using ll = long long;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;
#define rep(a, b) for (ll i = (a); i < (b); i++)
#define ZolpiE                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
using vi = vector<int>;
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
void pr(vi &arr, int n)
{
    for (ll i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void inputarray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void merge(vector<int> &arr, int left, int mid, int right)
{

    int r = right;
    while (r > mid)
    {
        if (arr[r] < arr[r - 1])
        {
            arr[r - 1] = arr[r] + arr[r - 1];
            swap(arr[r - 1]);
        }
        r--;
    }
    r = mid;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Merge the temp arrays back into arr
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    // Copy remaining elements
    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

// Recursive Merge Sort
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

signed main()
{
    ZolpiE;

    int tc;
    cin >> tc;
    while (tc--)
    {

        int n;
        cin >> n;
        vector<int> arr(n, 0);
        inputarray(arr, n);
    }

    return 0;
}
