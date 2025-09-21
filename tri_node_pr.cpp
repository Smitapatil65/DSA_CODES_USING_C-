#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;
/*
int ex(vector<vector<int>&tri)
{
    int n=a.size();
    vector<int>op(n,0);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(i==j)
                op[j]=op[j-1]+tri[i][j];
            else if(j==0)
                op[j]=op[j]+tri[i][j];
            else
                op[j]=min(op[j],op[j-1])+tri[i][j];
        }
    }
    return *min_element(op.begin(),op.end());
}
*/
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

    return 0;

}

























