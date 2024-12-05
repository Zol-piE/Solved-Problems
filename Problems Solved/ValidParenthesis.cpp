#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    int len= s.length();
    for(int i=0;i<len ;i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i] == '[') st.push(s[i]);
        else
        {
            char ch = st.top();
            if(st.empty()) return false;
            else if(s[i] == ')' && s[i]!='(' ) return false;
            else if(s[i] == '}' && s[i]!='{' ) return false;
            else if(s[i] == ']' && s[i]!='[' ) return false;
            else st.pop();
        }
    }
    return true;
    return 0;
}
