#include<bits/stdc++.h>
using namespace std;
//implementing queue using arrays
class Node{
public:
int data;
Node*next;
};
class Queue{
private:
Node *front;
Node *rear;
public:
Queue();
void Enqueue(int x);
int Dequeue();
bool isEmpty();
void Display();
};
Queue::Queue(){
  front=rear=nullptr;
  
}
bool Queue::isEmpty() {
    if (front == nullptr){
        return true;
    }
    return false;
}
void Queue::Enqueue(int x) {
    Node* t = new Node;
    if (t == nullptr){
        cout << "Queue Overflow" << endl;
    } else {
        t->data = x;
        t->next = nullptr;
        if (front == nullptr){
            front = t;
            rear = t;
        } else {
            rear->next = t;
            rear = t;
        }
    }
}

int Queue::Dequeue(){
  int x=INT_MIN;
  Node*p;
  if(isEmpty())
    cout<<"Queue UnderFlow"<<endl;
  else{
    p=front;
    front=front->next;
    x=p->data;
    delete p;
    
  }
  return x;
}

void Queue::Display(){
  Node*p=front;
  while(p){
    cout<<p->data<<flush;
    p=p->next;
    if(p!=nullptr)cout<<"<-"<<flush;
    
  }
 cout << endl;
}
 
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Queue q;
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.Enqueue(A[i]);
    }
 
    q.Display();
 
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        q.Dequeue();
    }
    q.Dequeue();
 
    return 0;
}
