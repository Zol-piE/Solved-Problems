#include<iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data,ListNode *next)
    {
        val =data;
        this->next = next;

    }
};
ListNode *create(int arr[],int Size)
{
    ListNode *temp,*last;
    ListNode *head = new ListNode(arr[0],NULL);
    last = head;
    for(int i=1; i<Size; i++)
    {
        temp = new ListNode(arr[i],NULL);
        last->next = temp;
        last = temp;
    }
    return head;

}
void Display(ListNode *p)
{
    while(p!=NULL)
    {
        cout<<p->val<<" ";
        p = p->next;

    }
    cout<<endl;
}
ListNode *Delete(ListNode *head, int n)
{
    ListNode *p = head;
    int len =0;
    while(p!=NULL)
    {
        len++;
        p=p->next;
    }
    if(n==len)
    {
        p=head;
        head = p->next;
        p->next = NULL;
        delete p;
        p=NULL;
    }
    else
    {

        p = head;
        ListNode *q = head;
        if(n==1)
        {
            for(int i=0; i<(len-2); i++)
            {
                p=p->next;
            }
            q = p->next;
            p->next = q->next;

            delete q;
            q=NULL;
        }
        else
        {
            for(int i=0; i<(len-n-1); i++)
            {
                p = p->next;
            }
            q= p->next;
            p->next = q ->next;
            q->next =NULL;
            delete q;
            q = NULL;
        }
    }
    return head;
}
void middle(ListNode *head)
{
      ListNode *curr,*prev,*prev2=NULL;
        curr=prev = head;
        if(head->next == NULL) return ;
        while(curr)
        {
            curr=curr->next;
            if(curr)
            {
                prev2 = prev;
                prev = prev->next;
            }
            if(curr) curr = curr->next;
        }
        prev2->next = prev->next;
        prev->next = NULL;
        delete prev;
        prev = NULL;
}
int main()
{
    int arr[]= {1};
    int len = sizeof(arr)/sizeof(arr[0]);
    ListNode *head = create(arr,len);
    Display(head);
    middle(head);
    Display(head);

    return 0;
}
