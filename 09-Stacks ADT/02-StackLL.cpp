#include<iostream>
using namespace std;

class Node{
public:
int val;
Node*next;
};

class Stack{
private:
Node *top;
public:
Stack(){top=NULL;}
void Display();
void Push(int x );
int pop();
int peek(int pos);
int IsEmpty();
int IsFull();
int stackTop();
};
void Stack:: Push(int x){
  Node*t=new Node;
  if(t==NULL)cout<<"Stack is full!";
  else{
  t->val=x;
  t->next=top;
   top=t;
    }
}

int Stack :: pop(){
  Node*t;
  int y;
  if(top==NULL)cout<<"Stack is empty";
  else{
  t=top;
  top=top->next;
   y= t->val;
  delete t;
    }
  return y;
    
}

int Stack::peek(int index) {
    if (IsEmpty()){
        return -1;
    } else {
        Node* p = top;
 
        for (int i=0; p != nullptr && i<index-1; i++){
            p = p->next;
        }
 
        if (p != nullptr){
            return p->val;
        } else {
            return -1;
        }
    }
}
int Stack::IsFull() {
    Node* t = new Node;
    int r = t ? 1 : 0;
    delete t;
    return r;
}
 
int Stack::IsEmpty() {
    return top ? 0 : 1;
}
 
int Stack::stackTop() {
    if (top){
        return top->val;
    }
    return -1;
}

int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Stack stk;
 
    // Populate stack
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.Push(A[i]);
    }
 
    cout << "Stack peek at 3rd: " << stk.peek(3) << endl;
    cout << "Stack peek at 10th: " << stk.peek(10) << endl;
    cout << "Stack top: " << stk.stackTop() << endl;
    cout << "Stack full: " << stk.IsFull() << endl;
    cout << "Stack empty: " << stk.IsEmpty() << endl;
 
    // Pop out elements from stack
    cout << "Popped: " << flush;
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << stk.pop() << ", " << flush;
    }
    cout << endl;
 
    // Underflow
    cout << stk.pop() << endl;
 
    return 0;
}