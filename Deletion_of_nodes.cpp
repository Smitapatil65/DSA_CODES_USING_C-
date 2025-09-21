#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;

struct node
{
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
    cout<<"NULL"<<endl;
}

node* push(node *head,int data)
{
    node *newNode=new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
    return head;
}
void insert_at(node* &head,int pos,int data)
{
  node *newNode=new node();
  newNode->data=data;

  if(pos==0)
  {

      newNode->next=head;
      head=newNode;
      return;
  }
  node* pre=head;
  for(int i=0;i<pos-1 && pre!=NULL;i++)
  {
      pre=pre->next;
  }
  if(pre==NULL)
  {
   cout<<"out of range";
   delete newNode;
   return;
  }
  newNode->next=pre->next;
  pre->next=newNode;

}
void insert_at_end(node* &head,int data)
{
    node* newNode=new node();
    newNode->data=data;
    newNode->next=NULL;
    node* n=head;
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    while(n->next !=NULL)
    {
        n=n->next;
    }
    n->next=newNode;
    return;
}

void delete_at_front(node* &head)
{
    if(head==NULL)
    {
        cout<<"Nothing to delete";
        return;
    }
    node *tmp=head;
    head=head->next;
    delete tmp;

}
void delete_at_pos(node* &head,int pos)
{
     if(head==NULL)
    {
        cout<<"Nothing to delete";
        return;
    }
    if(pos==0)
    {
       node *tmp=head;
       head=head->next;
       delete tmp;
       return;
    }
    node *tmp=head;
    node *pre=NULL;

    for(int i=0;i<pos && tmp!=NULL;i++)
    {
        pre=tmp;
        tmp=tmp->next;
    }
    if(tmp==NULL)
    {
        cout<<"Out of range"<<endl;
        return;
    }

    pre->next=tmp->next;
    delete tmp;
}
void delete_at_end(node* &head)
{
    if(head==NULL)
    {
        cout<<"Nothing to delete";
        return;
    }
    if(head->next==NULL)
    {
        delete head;
        head=NULL;
        return;
    }
    node* tmp=head;
    node* pre=NULL;

    while(tmp->next !=NULL)
    {
        pre=tmp;
        tmp=tmp->next;
    }
    pre->next=NULL;
    delete tmp;

}
int main()
{
    node* head=NULL;
    head=push(head,9);
    head=push(head,8);
    head=push(head,7);
    head=push(head,6);
    pl(head);
    insert_at(head,2,89);
    pl(head);

    insert_at_end(head,90);
    pl(head);

    delete_at_front(head);
    pl(head);

    delete_at_pos(head,3);
    pl(head);

    delete_at_end(head);
    pl(head);

    return 0;

}

























