// add node at end using recursion
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
Node *CreateLinkedList(int arr[],int index,int size,Node *prev)
{
    if(index==size)
    {
        return prev;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->Next=prev;
    return CreateLinkedList(arr,index+1,size,temp);
}
int main()
{
    Node *head;
    head=NULL;
    int arr[]={2,4,6,8,10};
    head=CreateLinkedList(arr,0,5,head);
    Node *temp;
    temp=head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp=temp->Next;
    }
    
}