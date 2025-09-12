#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
   int data;
   Node* next;
   Node(int val)
   {
     data=val;
     next=NULL;
   }
};
class List
{
    Node* head,*tail;
    public:
    List()
    {
        head=tail=NULL;
    }
    void push_front(int val)
    {   Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
            return;
        }else{
          newNode->next=head;
          head=newNode;
        }
    }
    void push_back(int val)
    {
        Node* newNode=new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
            return;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void pop_front()
    {
        if(head==NULL)
        {
            cout<<"Empty list cannot pop";
            return;
        }
            Node* tmp=head;
            head=head->next;
            tmp->next=NULL;
            delete tmp;
    }
    void pop_back()
    {
        if(head==NULL)
        {
            cout<<"Empty list cannot pop";
            return;
        }
        Node* tmp=head;
        while(tmp->next!=tail)
        {
            tmp=tmp->next;
        }
        tmp->next=NULL;
        delete tail;
        tail=tmp;
    }
   void insert(int pos,int val)
   {
       if(pos<0)
       {
           cout<<"cannot insert";
       }
       if(pos==0)
       {
           push_front(val);
           return;
       }
       Node* tmp=head;
       for(int i=0;i<pos-1;i++)
       {
           tmp=tmp->next;
       }
       Node* newNode=new Node(val);
       newNode->next=tmp->next;
       tmp->next=newNode;
   }
   void printl()
   {
       Node* tmp=head;
       while(tmp!=NULL)
       {
           cout<<tmp->data<<"->";
           tmp=tmp->next;
       }
          cout<<"NULL"<<endl;
   }
   int search(int k)
       {
           Node* tmp=head;
           int idx=0;
           while(tmp!=NULL)
           {
               if(tmp->data==k)
               {
                   return idx;
               }
               tmp=tmp->next;
               idx++;
           }
           return -1;
       }
};

int main()
{   List l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

   // l1.printll();
   // l1.push_back(4);
   // l1.printll();
   // l1.pop_back();



    l1.insert(4,1);
    l1.printll();
    cout<<"search="<<l1.search(4);
    return 0;
}









