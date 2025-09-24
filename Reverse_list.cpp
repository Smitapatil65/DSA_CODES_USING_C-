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

ListNode* reve(ListNode* head)
{
   ListNode* pre=NULL;
   ListNode* curr=head;
   ListNode* next=NULL;

   while(curr!=NULL)
   {
       next=curr->next;
       curr->next=pre;

       pre=curr;
       curr=next;
   }

    return pre;
}

void printList(ListNode* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);

    cout << "Original List: ";
    printList(head);

    head=reve(head);

    cout<<"Reversed list";
    printList(head);

    return 0;

}



