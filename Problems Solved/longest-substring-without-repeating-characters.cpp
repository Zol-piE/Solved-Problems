#include<iostream>
using namespace std;
bool Find(string str,char ch)
{
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(ch==str[i]) return true;
    }
    return false;
}
int lengthOfLongestSubstring(string s)
{
    int len = s.length();
    int res = INT_MIN;
    for(int i=0;i<len-1;i++)
    {
        string str="";
        str+=s[i];
//        cout<<str<<endl;
        for(int j = i+1;j<len;j++)
        {
            if(Find(str,s[j])) break;
            else str+=s[j];
        }
//        cout<<str<<endl;
        int len2 = str.length();
        res= (res>len2)? res : len2;
    }
    return res;
}
int main()
{
    string s ; cin>>s;
    cout<<lengthOfLongestSubstring(s);
    return 0;
}
