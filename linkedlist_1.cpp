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
    Node *head;
    head=NULL;
    int arr[]={20,25,30,35,40};
    for(int i=0;i<5;i++)
    {
    if(head==NULL)
    {
        head=new Node(arr[i]);
    }
    else
    {
        Node *temp;
        temp=new Node(arr[i]);
        temp->Next=head;
        head=temp;
    }
    }
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->Next;
    }
}