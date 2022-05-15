#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
 int val;
 TreeNode* left,*right;
 TreeNode(int value)
 { 
   val=value;
   left=NULL;
   right=NULL;
 } 
};
void level(TreeNode*root)
{
   queue<pair<int,TreeNode*>>q;//creating a queue of pair to store both level and address of node
   q.push({1,root});//inserting root and level=1
   while(!q.empty())
   {
     int lev=q.front().first;//fecthing level of front node 
     TreeNode *node=q.front().second;//fecthing address of front node
     cout<<"value:"<<node->val<<" "<<"level:"<<lev<<'\n';
     q.pop();//removing front node
     if(node->left!=NULL)
     {
       q.push({lev+1,node->left});//pushing level as parent-level+1;

     }
     if(node->right!=NULL)
     {
       q.push({lev+1,node->right});//pushing level as parent-level+1;

     }


   }
}
int main()
{
  TreeNode*root;
  root=new TreeNode(1);
  root->left=new TreeNode(2);
  root->right=new TreeNode(3);
  root->left->left=new TreeNode(4);
  root->right->right=new TreeNode(5);
  level(root);

}