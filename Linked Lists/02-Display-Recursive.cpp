#include<bits/stdc++.h>
using namespace std;
//displaying linked list!!!

class Node{
public:
int data;
Node*next;
};
void RDisplay(Node*p){
  if (p != nullptr){
          RDisplay(p->next);//in reverse order
        cout << p->data << " -> " << flush;
    // RDisplay(p->next);//in same order make recursive tree for clear understanding
        
    }
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
   RDisplay(head);

    return 0;

}