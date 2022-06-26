#include<bits/stdc++.h>
using namespace std;
//displaying linked list!!!

class Node{
public:
int data;
Node*next;
};

int count(Node*p){
  int c=0;
  while(p!=nullptr){
    c++;
   p= p->next;
  }
  return c;
}
int Add(Node *p){
  int sum=0;
  while(p!=nullptr){
    sum+=p->data;
    p=p->next;
  }
  return sum;
}
int main(){
  int a[]={2,0,2,0,5,1,0,4,4};
  Node*head=new Node;
  Node*temp;
  Node*Last;
  head->data=a[0];
  head->next=nullptr;
  Last=head;
  for(int i=1;i<sizeof(a)/sizeof(a[0]); i++){
    temp =new Node;
    temp->data=a[i];
    temp->next=nullptr;
      // last's next is pointing to temp
        Last->next = temp;
        Last = temp;
  }
   Node *p= head;
  while(p!=nullptr){
     cout << p->data << " -> " << flush;
        p = p->next;
  }
  cout<<endl;
   cout<<"The no. of nodes are : "<< count(head)<<endl;
  cout<<"The sum of all the elements are :"<<Add(head)<<endl;
     
    return 0;

}