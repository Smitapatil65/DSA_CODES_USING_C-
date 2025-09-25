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

bool loop(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head;

    while(fast!=NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
   ListNode* head=new ListNode(1);
   head->next=new ListNode(2);
   head->next->next=new ListNode(3);
   head->next->next->next=new ListNode(4);
   head->next->next->next->next=new ListNode(5);

   cout<<"Loop Present? :"<<(loop(head)?" YES":" NO")<<endl;

   head->next->next->next->next->next=head->next->next;
   cout<<"Loop Present? :"<<(loop(head)?" YES":" NO")<<endl;

    return 0;

}
