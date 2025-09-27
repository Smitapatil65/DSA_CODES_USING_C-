#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};
int size(ListNode* head)
{
    int n=0;
    while(head!=NULL)
    {
        n++;
        head=head->next;
    }
    return n;
}
ListNode* round(ListNode* head,int k)
{
   if(head==NULL)
   {
       return head;
   }
   int n=size(head);
   k=k%n;
   int loop=n-k;
   if(n==1 || k==0)
   {
       return head;
   }

   ListNode* tmp=head;
   ListNode* fa=head;

   int j=0;
   while(tmp!=NULL)
   {
       j++;
       if(j==loop)
       {
          fa=tmp->next;
          tmp->next=NULL;
          break;
       }
       tmp=tmp->next;
   }
    tmp=fa;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=head;
    return fa;

}
void printList(ListNode* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    int k=2;
    head=round(head,k);

    cout<<"Rotated list:";
    printList(head);

    return 0;

}





