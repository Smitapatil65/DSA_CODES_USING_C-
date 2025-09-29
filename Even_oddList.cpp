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
ListNode* lista(ListNode* head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    ListNode* o=head;
    ListNode* e=head->next;
    ListNode* e_h=e;

    while(e!=NULL && e->next!=NULL)
    {
        o->next=e->next;
        o=o->next;

        e->next=o->next;
        e=e->next;
    }
   o->next=e_h;
   return head;

}

void pril(ListNode* head)
{
    while(head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

ListNode* createList(vector<int>a)
{
    if(a.empty()) return NULL;
    ListNode* head=new ListNode(a[0]);
    ListNode* curr=head;

    for(int i=1;i<a.size();i++)
    {
        curr->next=new ListNode(a[i]);
        curr=curr->next;
    }
    return head;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode* head = createList(arr);

    cout << "Original list: ";
    pril(head);

    head = lista(head);

    cout << "Rearranged list (odd-even): ";
    pril(head);

    return 0;
}





















