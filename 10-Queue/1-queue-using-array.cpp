#include<bits/stdc++.h>
using namespace std;
//implementing queue using arrays

class Queue{
private:
int front;
int rear;
int size;
int *a;
public:
Queue(int size);
bool isFull();
bool isEmpty();
int dequeue();
void enqueue(int x);
void display();
};
Queue ::Queue(int size){
  this->size=size;
  front=rear=-1;
  a= new int[size];
  
}
bool Queue:: isEmpty(){
  if(front==rear)return true;
  return false;
}
bool Queue :: isFull(){
  if(rear==size-1)return true;
  return false;
}
void Queue:: enqueue(int x){
  if(isFull())
    cout<<"Queue Overflow";
  else{
    rear++;
    a[rear]=x;
  }
}
int Queue:: dequeue(){
  int x=INT_MIN;
  if(isEmpty())cout<<"Underflow";
  else{
    front++;
    x=a[front];
  }
  return x;
}

void Queue :: display(){
  for(int i=front +1;i<=rear;i++){
    cout<<a[i]<<flush;
    if(i<rear)cout<<"<-"<<flush;
  }
  cout<<endl;
}
int main(){
  int A[]={2,0,2,0,5,1,0,4,4};
  Queue q(sizeof(A)/sizeof(A[0]));
  for(int i=0;i<sizeof(A)/sizeof(A[0]);i++)
    q.enqueue(i);

  q.display();
  // Overflow
    q.enqueue(10);
 
  for(int i=0;i<sizeof(A)/sizeof(A[0]);i++)
    q.dequeue();

  q.dequeue();//underflow;

  
  
}
