#include<bits/stdc++.h>
using namespace std;
//displaying linked list!!!

class Node{
public:
int data;
Node*next;
};

int Max(Node*p){
  int max= INT_MIN;
  while(p){
    if(p->data>max)
      max=p->data;
    p=p->next;
  }
  return max;
}
int RMax(Node*p){
  int x=0;
    if(p==0)return INT_MIN;
 x=RMax(p->next);
 return p->data>x?p->data:x;
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
     cout<<"Maximum element is :"<<Max(head)<<endl;
  cout<<"Max element using recursive calls is :"<<RMax(head)<<endl;
    return 0;

}