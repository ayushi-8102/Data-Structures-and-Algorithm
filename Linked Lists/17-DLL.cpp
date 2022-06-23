#include <bits/stdc++.h>
using namespace std;
//CREATING DOUBLY LINKED LIST 

class Node{
public:
int data;
Node *prev;
Node *next;
};

class DLL{
  private:
Node*head;
public:
DLL(){head=NULL;};
DLL(int A[],int n);
void Display();
int Length();


};

DLL::DLL(int A[],int n){
  Node *t,*tail;
  head=new Node;
  head->data=A[0];
  head->next=NULL;
  head->prev=NULL;
  tail=head;

  for(int i=1;i<n;i++){
    t=new Node;
    t->data=A[i];
    t->next=tail->next;
    t->prev=tail;
    tail->next=t;
    tail=t;
  }
  
}

void DLL:: Display(){
  Node *p=head;
  while(p){
    cout<<p->data<<"<->";
    p=p->next;
  }
  
}

int DLL:: Length(){
  int len=0;
  Node*p=head;
  while(p){
    len++;
    p=p->next;
  }
  return len;
}

int main(){
  cout<<"How many elements do you want?"<<endl;
  int n;
  cin>>n;
  int A[n];
  cout<<"Enter the Array :"<<endl;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  
  DLL dll(A,n);
  dll.Display();
  
}