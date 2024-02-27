// insertion the value at end
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *Next;
    Node(int value)
    {
        data=value;
        Next=NULL;
    }
};
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    int arr[]={2,4,6,8,10};
    for(int i=0;i<5;i++)
    {
        if(head==NULL)
        {
            head=new Node(arr[i]);
            tail=head;
        }
        else
        {
            tail->Next=new Node(arr[i]);
            tail=tail->Next;
        }

    }
    Node *temp;
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->Next;
    }
}