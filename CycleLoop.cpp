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

ListNode* detectCycle(ListNode* head)
{
    ListNode* slow=head;
    ListNode* fast=head;
    bool cycle=false;

    while(fast!=NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
             cycle=true;
             break;
        }
    }
    if(!cycle)
    {
        return NULL;
    }

   // ListNode* pre=NULL;
    slow=head;

    while(slow!=fast)
    {
        slow=slow->next;
       // pre=fast;
        fast=fast->next;
    }
    return slow;

}
int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Case 1: No cycle
    head->next->next->next->next->next = head->next->next;

    // Detect cycle
    ListNode* cycleNode = detectCycle(head);
    if (cycleNode != NULL)
        cout << "Cycle starts at node with value: " << cycleNode->val << endl;
    else
        cout << "No cycle found" << endl;

    return 0;
}
