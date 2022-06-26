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
void Insert(int index,int x);
int count();
};

Linkedlist:: Linkedlist(int A[],int x){
  Node*temp,*tail;
  head=new Node;
   head->data=A[0];
  head->next=NULL;
  tail=head;
  
  for(int i=0;i<x;i++){
    temp=new Node;
    temp->data=A[i];
    temp->next=NULL;
    tail->next=temp;
    tail=temp;
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

void Linkedlist::Insert(int index,int x)
{
 Node *t,*p=head;

 if(index <0 || index > count())
 return;
 t=new Node;
 t->data=x;
 t->next=NULL;

 if(index==0)
 {
 t->next=head;
 head=t;
 }
 else
 {
 for(int i=0;i<index-1;i++)
 p=p->next;
 t->next=p->next;
 p->next=t;
 }
}

int main(){
  int A[]={2,0,2,0,5,1,0,4,4};
  Linkedlist l (A,sizeof(A)/sizeof(A[0]));
  l.Insert(3,69);
 l. Display();
cout<< l. count();
  
}