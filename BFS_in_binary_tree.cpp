#include<bits/stdc++.h>
using namespace std;
struct TreeNode //creating  a structure of node
{
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int num) //constructor 
  {
      val=num;
      left=NULL;
      right=NULL;
  }
};
void bfs(TreeNode* root) //function to impliment bfs
{
   queue<TreeNode*>q; //declearation of queue
   q.push(root);
   while(!q.empty())
   {
       TreeNode* element=q.front();
       q.pop();
       cout<<element->val<<" ";
       if(element->left!=NULL)
       { 
           q.push(element->left);
       }
       if(element->right!=NULL)
       { 
           q.push(element->right);
       }
       cout<<'\n';
   }
}
int main()
{
   TreeNode *root,*temp;
   root=new TreeNode(1);//this the major way to construct binary tree ,we have to do it manually like this 
   root->left=new TreeNode(5);//because we can't move (root->left->right) or (root->right->left )in a loop
   root->right=new TreeNode(3);//so decleration of binary tree is manually done not iterately max times
   root->left->left=new TreeNode(4);
   root->right->right=new TreeNode(2);
   bfs(root);

}