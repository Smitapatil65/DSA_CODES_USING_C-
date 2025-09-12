#include<iostream>
#include<vector>
using namespace std;
struct Node{
  int data;
  Node* next;
};
void insertatbeg(Node*&head,int val)
{
    Node* newNode=new Node();
    newNode->data=val;
    newNode->next=head;
    head=newNode;

}
void print(Node* head)
{
    Node* tmp=head;
    while(tmp!=nullptr)
    {
        cout<<tmp->data<<"->";
        tmp=tmp->next;
    }
   cout<<"NULL"<<endl;
}
int main()
{
     // Node* newNode=new Node();
    //newNode->data=10;
   // newNode->next=nullptr;
   // cout<<"node="<<newNode->data<<endl;
   Node* head=nullptr;
   insertatbeg(head,10);
   insertatbeg(head,20);
   insertatbeg(head,50);
   cout<<"linked list:";
   print(head);

   return 0;

}
