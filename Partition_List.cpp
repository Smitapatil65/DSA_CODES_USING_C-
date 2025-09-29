#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* partition_List(ListNode* head,int x)
{
    ListNode* s_h=new ListNode(0);
    ListNode* s=s_h;
    ListNode* h_h=new ListNode(0);
    ListNode* h=h_h;

    while(head!=NULL)
    {
        if(x > head->val)
        {
            s->next=head;
            s=s->next;

        }else{
           h->next=head;
           h=h->next;

        }
        head=head->next;
    }
     h->next=NULL;
     s->next=h_h->next;
     return s_h->next;
}

ListNode* createList(vector<int> arr) {
    if (arr.empty()) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 4, 3, 2, 5, 2};
    int x = 3;

    cout << "Original List: ";
    ListNode* head = createList(arr);
    printList(head);

    ListNode* result = partition_List(head, x);

    cout << "Partitioned List around " << x << ": ";
    printList(result);

    return 0;
}




