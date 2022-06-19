#include<bits/stdc++.h>
using namespace std;
class Diagonal{
private:
int n;
int *a;

public:
Diagonal(){
  n=2;
  a=new int[2];
}
Diagonal(int n){
  this->n=n;
  a= new int[n];
}
void set(int i,int j,int x);
int get(int i,int j);
void Display();
~Diagonal(){delete[]a;};
};
void Diagonal::set(int i,int j,int x){
  if(i==j)
    a[i-1]=x;
}
int Diagonal:: get(int i,int j){
  if(i==j)
    return a[i-1];
  return 0;
}
void Diagonal::Display(){
  for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
      if(i==j) cout<<a[i-1]<<" ";
      else cout<<"0"<<" ";
    }
    cout<<endl;
  }
}

int main(){
Diagonal d(4);
  d.set(1,1,20);
  d.set(2,2,20);
  d.set(3,3,510);
  d.set(4,4,44);
  
  d.Display();
  return 0;
}