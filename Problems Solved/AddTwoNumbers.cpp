#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d,node *next)
    {
        data = d;
        this->next = next;
    }
};
node *create(int arr[],int Size)
{
    node *temp,*last;
    node *first= new node(arr[0],NULL);
    last = first ;
    for(int i=1;i<Size;i++)
    {
        temp = new node(arr[i],NULL);
        last->next = temp;
        last = temp;
    }
    return first;

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
void add(node *&f,node *&l,int value)
{
    node *temp = new node(value,NULL);
    if(f==NULL && l==NULL)
    {
        f=l=temp;
    }
    else
    {
        l->next = temp;
        l=temp;
    }
}
node  *addLast(node *first,node *second)
{
    node *f=NULL,*l=NULL;
    static int x=0;
    while(first && second)
    {
        x=first->data+second->data+x;
        int y = x%10;
        x/=10;
        add(f,l,y);
        first = first ->next;
        second = second->next;


    }
    if(first!=NULL)
    {
        while(first)
        {
            x = first->data+x;
            int y = x%10;
            x/=10;
            add(f,l,y);
            first = first ->next;

        }
    }
    if(second!=NULL)
    {
        while(second)
        {
            x = second->data+x;
            int y = x%10;
            x/=10;
            add(f,l,y);
            second = second->next;

        }
    }
    if(x>0)
    {
        add(f,l,x);
        x=0;

    }
    return f;

}
int main()
{
    int arr[] = {9,9,9,9,9,9,9},brr[]={9,9,9,9};
    node *head =create(arr,7);
    display(head);
    node *head2 = create(brr,);
    display(head2);
    node *head3=addLast(head,head2);
    display(head3);

    return 0;
}

