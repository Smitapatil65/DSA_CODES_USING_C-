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

void ReorderList(ListNode* head)
{
  if(head==NULL || head->next==NULL)
  {
      return;
  }

  ListNode* p1=head;
  ListNode* p2=head;

  while(p2->next !=NULL && p2->next->next!=NULL)
  {
      p1=p1->next;
      p2=p2->next->next;
  }
  ListNode* pm=p1;
  ListNode* pc=p1->next;


  while(pc->next!=NULL)
  {
      ListNode* curr=pc->next;
      pc->next=curr->next;
      curr->next=pm->next;
      pm->next=curr;
  }
  p1=head;
  p2=pm->next;

  while(p1!=pm)
  {
      pm->next=p2->next;
      p2->next=p1->next;
      p1->next=p2;
      p1=p2->next;
      p2=pm->next;
  }
}
void printList(ListNode* head)
{
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main() {
    // Example: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    ReorderList(head);

    cout << "Reordered List: ";
    printList(head);

    return 0;
}






