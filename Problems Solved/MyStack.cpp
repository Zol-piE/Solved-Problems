#include<iostream>
#include<queue>

using namespace std;
class MyStack
{
public:
    queue<int> q1;
    MyStack() {

    }

    void push(int x) {

        q1.push(x);
    }

    int pop() {
        int n = q1.size();
        for(int i=1;i<n;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
        int res = q1.front();
        q1.pop();
        return res;
    }

    int top() {
        int n = q1.size(),t;
        for(int i=1;i<n;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
        t = q1.front();
        q1.push(q1.front());
        q1.pop();
        return t;
    }

    bool empty() {
        return (q1.empty());
    }
};
int main()
{
    return 0;
}
