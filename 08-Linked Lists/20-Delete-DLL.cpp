#include <bits/stdc++.h>
using namespace std;


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
void Insert(int pos,int x);
void Delete(int pos);


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
void DLL::Insert(int pos,int x)
{
  Node*p=head,*t;
  if(pos<0||pos>Length())
    return;
  if(pos==1){
    t=new Node;
    t->data=x;
    t->prev=NULL;
    t->next=head;
    head=t;
  }
  else{
    for(int i=0;i<pos-1;i++)
      p=p->next;
    t=new Node;
    t->data=x;
     t->prev=p;
    t->next=p->next;
    if(p->next)p->next->prev=t;//if it is not the last node
      p->next=t;
  }
}
void DLL:: Delete(int pos){
  if(pos<0||pos>Length()) return;
  Node*p=head;
if(pos==1){
  head=head->next;
 if(head) head->prev=NULL;
  int x=p->data;
  delete p;
}
  else{
    for(int i=0;i<pos-1;i++)p=p->next;
    p->prev->next=p->next;
    if(p->next)p->next->prev=p->prev;
    int y=p->data;
    delete p;
  }
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
  cout<<endl;
  dll.Insert(1,0);
  dll.Insert(4,23);
  dll.Insert(5,78);
  cout<<"After Insertion : "<<endl;
  dll.Display();
  dll.Delete(1);
  cout<<"After Deletion : "<<endl;
  dll.Display();
  cout<<endl;
  dll.Delete(6);
  cout<<"After Deletion : "<<endl;
  dll.Display();
  
}