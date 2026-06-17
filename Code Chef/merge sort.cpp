#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test int t; cin>>t;
typedef vector<int> vec;

void print(vector<int>&arr,int low,int high)
{
    for(int i =low;i<=high;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print(vector<int>&arr,int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void subMerge(vec &arr,int low,int mid,int high)
{
    int n1 = mid - low +1;
    int n2 = high - mid;
    vec s1(n1,0),s2(n2,0);
    for(int i = 0;i<n1;i++)
    {
        s1[i] = arr[low+i];
    }
    for(int i = 0;i<n2;i++)
    {
        s2[i] = arr[mid+i+1];
    }
    int k = low,i = 0,j =0;
    while(i<n1 && j<n2)
    {
        if(s1[i]<=s2[j])
        {
            arr[k++] = s1[i++];
        }
        else arr[k++] = s2[j++];
    }
    while(i<n1) arr[k++] = s1[i++];

    while(j<n2) arr[k++] = s2[j++];
}
void mergeSort(vec &arr,int low,int high)
{
    if(low<high){
    //divide the array into subarrays

    int mid = low + (high - low) / 2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    subMerge(arr,low,mid,high);
    }

}
void divide(vec &arr,int low,int high)
{
    queue<pair<int,int>>qt;
    qt.push({low,high});
    int k =1;
    while(!qt.empty())
    {
        pair<int,int> p= qt.front(); qt.pop();
        low = p.first;
        high = p.second;
        cout<<k++<<" person is given with these numbers :";
        print(arr,low,high);
        if(low==high) continue;
        int mid = low + (high- low)/2; 
        qt.push({low,mid});
        qt.push({mid+1,high});
    }

}
int main()
{
    fast
    
    int n;cin>>n;
    vector<int> arr(n,0);
    for(int i =0;i<n;i++) cin>>arr[i];

    divide(arr,0,n-1);
    mergeSort(arr,0,n-1);
    cout<<"After Sorting the elements are : ";
    print(arr,n);
    return 0;
}
