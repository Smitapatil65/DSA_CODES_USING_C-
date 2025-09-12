#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct Node
{
   int data;
   struct Node *left;
   struct Node *right;
    Node(int val)
    {

        data=val;
        left=right=NULL;
    }
};

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(7);
    root->left->right=new Node(5);





}









