#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
};
 Node*newnode(int data){
    Node*TreeNode=new Node;
    TreeNode->data=data;
    TreeNode->left=TreeNode->right=NULL;
    return TreeNode;
}

vector<int>LevelOrder(Node*node){
    queue<Node*>q;
    q.push(node);
     vector<int>ans;
     if(node==NULL)return ans;
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
        ans.push_back(temp->data);
    }
return ans;
}

int main(){
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
  LevelOrder(n1);
    cout<<endl;
}

