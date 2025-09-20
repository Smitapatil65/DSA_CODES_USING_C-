#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;

struct node{
 int data;
 node *next;
};

void pl(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<"->";
        n=n->next;
    }
    cout<<"null";
}
node* push(node* head,int newData)
{
    node* newNode=new node();
    newNode->data=newData;
    newNode->next=head;
    head=newNode;

   return head;
}
void insertatpos(node* &head,int pos,int data)
{
    node *NewNode=new node();
    NewNode->data=data;

    if(pos==0)
    {
       NewNode->next=head;
       head=NewNode;
       return;
    }
    node *pre;
    for(int i=0;i<pos-1 && pre!=NULL;i++)
    {
        pre=pre->next;
    }
    if(pre==NULL)
    {
       cout<<"out of range";
       delete NewNode;
       return;
    }
    NewNode->next=pre->next;
    pre->next=NewNode;

}

int main()
{
    node *head=NULL;
    head=push(head,1);
    head=push(head,2);
    head=push(head,3);

    insertatpos(head,4,78);
    pl(head);
    return 0;

}





