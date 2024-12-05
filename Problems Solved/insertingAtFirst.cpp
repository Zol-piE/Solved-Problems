#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data=data;
        this->next = NULL;
    }
    node(int data,node *next)
    {
        this->data = data;
        this->next = next;
    }
}*first = NULL;
void insertFirst(int value)
{
    node *temp =new node(value);
    temp->next = first;
    first = temp;
}
void display(node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
int main()
{
    for(int i=1;i<=5;i++) insertFirst(i);

    display(first);
    insertFirst(55);
    display(first);
    return 0;
}
