#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x)
    {
        val=x;
        left=NULL;
        right=NULL;
    }
};
vector<vector<int>>level(TreeNode* root)
{
    vector<vector<int>>ans;
    queue<TreeNode*>q;
    q.push(root);

    if(root==NULL)
        return ans;

    while(1)
    {
        int size=q.size();
        if(size==0)
            return ans;
        vector<int>data;
        while(size>0)
        {
           TreeNode* tmp=q.front();
           q.pop();
           data.push_back(tmp->val);
           if(tmp->left!=NULL)
                q.push(tmp->left);
           if(tmp->right!=NULL)
                q.push(tmp->right);
           size--;

        }

        ans.push_back(data);
    }
    return ans;

}
void pl(const vector<vector<int>>& levels)
{
    for(const auto& level:levels)
    {
        for(int val:level)
            cout<<val<<" ";
        cout<<endl;
    }
}

int main()
{
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    vector<vector<int>>levels=level(root);
    pl(levels);
    return 0;


}











