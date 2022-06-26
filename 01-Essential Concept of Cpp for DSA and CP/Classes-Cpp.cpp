#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
    int length;
    int breath;
    public:
   Rectangle(){
     length=breath=0;
   }
Rectangle(int l,int b);
int area();
int perimeter();
int getlength(){
  return length;
}
void setlength(int l){
  l= length;
}
};
Rectangle::Rectangle(int l,int b){
  length=l;
  breath=b;
}
int Rectangle::area(){
  return length*breath;
}
int Rectangle:: perimeter(){
  return 2*length*breath;
}
int main(){
 Rectangle r=Rectangle(10,5);
  cout<<"The area of the rectangle is :"<<r.area()<<endl;
  cout<<"The perimeter of the rectangle is:"<<r.perimeter()<<endl;
  cout<<"The length of the rectangle is :"<<r.getlength()<<endl;
r.setlength(30);
  //cout<<"The length of the rectangle is :"<<r.getlength()<<endl;
}