#include<bits/stdc++.h>
using namespace std;

template<class T>
class Rectangle{
    private:
    T length;
    T breath;
    public:
   Rectangle(){
     length=breath=0;
   }
Rectangle(T l,T b);
T area();
T perimeter();
T getlength(){
  return length;
}
void setlength(T l){
  l= length;
}
};
template<class T>
Rectangle<T>::Rectangle(T l,T b){
  length=l;
  breath=b;
}
template<class T>
T Rectangle<T>::area(){
  return length*breath;
}
template<class T>
T Rectangle<T>:: perimeter(){
  return 2*length*breath;
}
int main(){
 Rectangle<int>r(10,5);
  cout<<"The area of the rectangle is :"<<r.area()<<endl;
  cout<<"The perimeter of the rectangle is:"<<r.perimeter()<<endl;
  cout<<"The length of the rectangle is :"<<r.getlength()<<endl;
r.setlength(30);
  Rectangle<float>ra(10.4,5.9);
  cout<<"The area of the rectangle is :"<<ra.area()<<endl;
  cout<<"The perimeter of the rectangle is:"<<ra.perimeter()<<endl;
  cout<<"The length of the rectangle is :"<<ra.getlength()<<endl;
  //cout<<"The length of the rectangle is :"<<r.getlength()<<endl;
}