#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node *next;
};

class CLL{
private:
Node*head;
public:
CLL(int A[],int n);
void Display();
void recursiveDisplay(Node* p);
    Node* getHead(){ return head; }
    ~CLL();
};

CLL:: CLL(int A[],int n){
  Node *tail,*t;
  int i;
  head=new Node;
  head->data=A[0];
  head->next=head;
  tail=head;
  for(i=1;i<n;i++){
    t=new Node;
    t->data=A[i];
    t->next=tail->next;
    tail->next=t;
    tail=t;
  }
}
void CLL:: Display(){
  Node *p=head;
  do{
    cout<<p->data<<"->"<<flush;
    p=p->next;
  }while(p!=head);
    cout<<endl;
}
void CLL:: recursiveDisplay(Node* p){
  static int flag=0;
  if(p!=head||flag==0){
    flag=1;
    cout<<p->data<<"->"<<flush;
    recursiveDisplay(p->next);
  }
  flag=0;
}
CLL::~CLL() {
    Node* p = head;
    while (p->next != head){
        p = p->next;
    }
 
    while (p != head){
        p->next = head->next;
        delete head;
        head = p->next;
    }
 
    if (p == head){
        delete head;
        head = nullptr;
    }
 
}

int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    CLL cll(A, sizeof(A)/sizeof(A[0]));
 
    cll.Display();
 
    Node* h = cll.getHead();
  cout<<"Using recursive display :"<<endl;
    cll.recursiveDisplay(h);
 
    return 0;
}