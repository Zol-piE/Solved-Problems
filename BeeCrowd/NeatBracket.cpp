#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str; cin>>str;
    stack<char> st;
    for(char ch :str)
    {
        if(ch=='(') st.push(ch);
        else
        {
            if(st.empty())
            {
                cout<<"No"<<endl;
                return 0;
            }
            st.pop();
        }
    }
    if(st.empty()) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
