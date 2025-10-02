#include<iostream>
#include<climits>
#include<math.h>
#include<vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode():val(0),next(NULL){}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){}

};

TreeNode* so(ListNode* head)
{
    if(head==NULL)
        return NULL;

    if(head->next==NULL)
        return new TreeNode(head->val);

    ListNode* slow=head;
    ListNode* fast=head;
    ListNode* s_p=slow;

    while(fast!=NULL && fast->next!=NULL)
    {
        s_p=slow;
        slow=slow->next;
        fast=(fast->next)->next;
    }
    TreeNode* root=new TreeNode(slow->val);
    s_p->next=NULL;

    root->left=so(head);
    root->right=so(slow->next);
    return root;
}

void preorder(TreeNode* root)
{
    if(root==NULL)return;
    cout<<root->val<<"";
    preorder(root->left);
    preorder(root->right);

}
ListNode* createList(vector<int>arr)
{
    if(arr.empty()) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;

}
int main() {
    vector<int> arr = {-10, -3, 0, 5, 9};
    ListNode* head = createList(arr);

    TreeNode* root = so(head);

    cout << "Preorder traversal of BST: ";
    preorder(root);
    cout << endl;

    return 0;
}










