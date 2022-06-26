#include<bits/stdc++.h>
using namespace std;
//stacks generally have these operation:
//pop->works only on top one
//stacks follow LIFO principle
//push,top,\\pop are the major operations performed

int main(){
    stack<int>s;
    s.push(1);
     s.push(2);
      s.push(3);
       s.push(4);

       while(!s.empty()){
           cout<<s.top()<<endl;
           s.pop();
       }
       //queue follows FIFO
       //queue have basically 3 functions they are: push,pop,front
       queue<string>q;
       q.push("abc");
        q.push("ayu");
         q.push("shi");
          q.push("yui");
          while(!q.empty()){
              cout<<q.front()<<endl;
                   q.pop();
          }

}
