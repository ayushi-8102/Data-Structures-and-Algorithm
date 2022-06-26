#include<bits/stdc++.h>
using namespace std;
//displaying linked list!!!

class Node{
public:
int data;
Node*next;
};

class Linkedlist{
private:
Node*head;
public:
Linkedlist(){head=NULL;}
Linkedlist(int A[],int x);
~Linkedlist();
void Display();
void SInsert(int x);
int count();
};

Linkedlist::Linkedlist(int A[],int n)
{
 Node *tail,*t;
 int i=0;

 head=new Node;
 head->data=A[0];
 head->next=NULL;
 tail=head;

 for(i=1;i<n;i++)
 {
 t=new Node;
 t->data=A[i];
 t->next=NULL;
 tail->next=t;
 tail=t;
 }
}
Linkedlist::~Linkedlist()
{
 Node *p=head;
 while(head)
 {
 head=head->next;
 delete p;
 p=head;
 }
}
void Linkedlist:: Display(){
 Node *p= head;
  while(p){
    cout<<p->data<<"->";
    p=p->next;
  }
  cout<<endl;
}

int Linkedlist:: count(){
  Node*p=head;
  int count=0;
  while(p){
    count++;
    p=p->next;
  }
  return count;
}

void Linkedlist::SInsert(int x)
{
 Node *t,*p=head;
  Node *q=NULL;
  t=new Node;
  t->data=x;
  t->next=NULL;
if(head==NULL)t=head;
    else
 {
 while(p && p->data<x)
 {
 q=p;
 p=p->next;
 }
 if(p==head)
 {
 t->next=head;
 head=t;
 }
 else
 {
 t->next=q->next;
 q->next=t;
 }
 }
}


int main(){
  int A[]={3,45,222,456,578,1101,2111};
  Linkedlist l (A,sizeof(A)/sizeof(A[0]));
  l.SInsert(87);
 l. Display();
cout<< l. count()<<endl;
  
  
}