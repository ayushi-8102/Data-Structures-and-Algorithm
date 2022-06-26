#include<bits/stdc++.h>
using namespace std;


void swap_value(int x,int y){
  int temp;
  x=temp;
  y=x;
  temp=y;
}
void swap_address(int *x,int *y){
 int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
void swap_refrence(int &x, int &y){
  int temp;
  temp=x;
  x=y;
  y=temp;
}
int main(){
int a=10;
int b=20;
int c= 5;
int d=39;
int e=44;
int f=23;
cout<<"Before value parameter :"<<a<<endl<<b<<endl;
  cout<<"Before address parameter :"<<c<<endl<<d<<endl;
 cout<<"Before refrence parameter:"<<e<<endl<<f<<endl;
 swap_value(a,b);
  swap_address(&c,&d);
  swap_refrence(e,f);
   cout<<"After value parameter :"<<a<<endl<<b<<endl;
  cout<<"After address parameter :"<<c<<endl<<d<<endl;
 cout<<"After  refrence parameter:"<<e<<endl<<f<<endl;

}