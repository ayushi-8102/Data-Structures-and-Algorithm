#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

class CLL {
private:
  Node *head;

public:
  CLL(int A[], int n);
  void Display();
  void recursiveDisplay(Node *p);
  Node *getHead() { return head; }
  void Insert(int index, int x);
  void Delete(int pos);
  int Length();
  ~CLL();
};

CLL::CLL(int A[], int n) {
  Node *tail, *t;
  int i;
  head = new Node;
  head->data = A[0];
  head->next = head;
  tail = head;
  for (i = 1; i < n; i++) {
    t = new Node;
    t->data = A[i];
    t->next = tail->next;
    tail->next = t;
    tail = t;
  }
}
int CLL::Length() {
  int len = 0;
  Node *p;
  p = head;
  do {
    len++;
    p = p->next;
  } while (p != head);
  return len;
}
void CLL::Display() {
  Node *p = head;
  do {
    cout << p->data << "->" << flush;
    p = p->next;
  } while (p != head);
  cout << endl;
}
void CLL::recursiveDisplay(Node *p) {
  static int flag = 0;
  if (p != head || flag == 0) {
    flag = 1;
    cout << p->data << "->" << flush;
    recursiveDisplay(p->next);
  }
  flag = 0;
}

void CLL::Insert(int index, int x) {
  Node *p=head, *t;

  if (index < 0 || index > Length())
    return;
  if (index == 0) {
    t = new Node;
    t->data = x;
    if (head == NULL) {
      head = t;
      head->next = head;
    } else {
      while (p->next != head) {
        p = p->next;
      }
      p->next = t;
      t->next = head;
      head = t;
    }

  } else {
    t = new Node;
    t->data = x;
    for (int i = 0; i < index - 1; i++) {
      p = p->next;
    }
    t->next = p->next;
    p->next = t;
  }
}
void CLL::Delete(int pos) {
  Node *p = head, *q;
  if (pos < 0 || pos > Length())
    return;

  if (pos == 0) {
    while (p->next != head)
      p = p->next;
    int x = head->data;
    if (p == head) {
      delete p;
      head = NULL;
    } else {
      p->next = head->next;
      delete head;
      head = p->next;
    }

  } else {
    for (int i = 0; i < pos - 2; i++)
      p = p->next;
    q = p->next;
    p->next = q->next;
    int y = q->data;
    delete q;
  }
}
CLL::~CLL() {
  Node *p = head;
  while (p->next != head) {
    p = p->next;
  }

  while (p != head) {
    p->next = head->next;
    delete head;
    head = p->next;
  }

  if (p == head) {
    delete head;
    head = nullptr;
  }
}

int main() {

  int A[] = {1, 3, 5, 7, 9};

  CLL cll(A, sizeof(A) / sizeof(A[0]));

  cll.Display();

  Node *h = cll.getHead();
  cout << "Using recursive display :" << endl;
  cll.recursiveDisplay(h);
  cout<<endl;
  cout << "inserting new data at 1 position: ";
  cll.Insert(0, 12);
   cll.Display();
  cout << endl;
  cout << "inserting new data at any position: ";
  cll.Insert(3, 15);
   cll.Display();
  cout<<endl;
  cout << "deleting new data at 1 position: ";
  cll.Delete(0);
   cll.Display();
  cout << endl;
  cout << "deleting new data at any position: ";
  cll.Delete(3);
   cll.Display();
  cout<<endl;
  return 0;
}