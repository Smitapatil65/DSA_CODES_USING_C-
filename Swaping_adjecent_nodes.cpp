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

ListNode* swapPairs(ListNode* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    ListNode* first=head;
    ListNode* sec=head->next;
    ListNode* pre=NULL;

    while(first!=NULL && sec!=NULL)
    {
        ListNode* third=sec->next;
        sec->next=first;
        first->next=third;
        if(pre!=NULL)
        {
           pre->next=sec;
        }else{
           head=sec;
        }
        pre=first;
        first=third;
        if(third!=NULL)
        {
          sec=third->next;
        }else{
        sec=NULL;
        }

    }
    return head;
}
void printList(ListNode* head)
{
  while(head!=NULL)
  {
      cout<<head->val<<"->";
      head=head->next;
  }
    cout<<"NULL";
    cout<<endl;
}

ListNode* createList(vector<int> a)
{
    if(a.empty())return NULL;
    ListNode* head=new ListNode(a[0]);
    ListNode* current=head;
    for(int i=1;i<a.size();i++)
    {
        current->next=new ListNode(a[i]);
        current=current->next;
    }
    return head;
}

int main()
{
    vector<int> a={1,2,3,4,5,6};
    ListNode* head=createList(a);
    cout<<"Original list:";
    printList(head);

    head=swapPairs(head);
    cout<<"After swaping:";
    printList(head);

    return 0;
}


