#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node*left,*right;
};
Node*newnode(int data){
  Node*temp=new Node;
  temp->data=data;
  temp->left=temp->right=NULL;
  return temp;
}
void preorder(struct Node*root){
  if(root==NULL)return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
void inorder(struct Node*root){
  if(root==NULL)return;
 
  inorder(root->left);
   cout<<root->data<<" ";
  inorder(root->right);
}
void postorder(struct Node*root){
  if(root==NULL)return;
  postorder(root->right);
  postorder(root->left);
  cout<<root->data<<" ";
  
}
int main()
{
  struct Node*n1=newnode(1);
  n1->left=newnode(2);
  n1->right=newnode(3);
  n1->left->left=newnode(4);
  n1->left->right=newnode(5);
  n1->right->left=newnode(6);
  n1->right->right=newnode(7);
  n1->left->right->left=newnode(8);
  n1->right->left->left=newnode(9);
  n1->right->left->right=newnode(10);
  cout<<"The pre-order traversal is:";
  preorder(n1);
    cout<<endl;
   cout<<"The In-order traversal is:";
  inorder(n1);
  cout<<endl;
   cout<<"The post-order traversal is:";
  postorder(n1);
  cout<<endl;
  }