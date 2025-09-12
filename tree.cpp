#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
void inorder(TreeNode* root,vector<int>&ans)
{
    if(root!=NULL)
    {
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);

    }

}
vector<int>inorderTraversal(TreeNode* root)
{
    vector<int>ans;
    inorder(root,ans);;
    return ans;
}

int main()
{
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    vector<int> res=inorderTraversal(root);
    cout<<"inorder:"<<endl;
    for(int c:res)
    {
        cout<<c<<"";
    }
    cout<<endl;
    return 0;
}





