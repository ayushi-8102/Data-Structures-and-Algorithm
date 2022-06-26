#include<bits/stdc++.h>
using namespace std;
//lower trisngular matrix using coloumn major 
class Ltri{
private:
int n;
int *a;

public:
Ltri(){
  n=2;
  a=new int[2*(2+1)/2];
}
Ltri(int n){
  this->n=n;
  a= new int[n*(n+1)/2];
}
void set(int i,int j,int x);
int get(int i,int j);
void Display();
~Ltri(){delete[]a;};
int GetDimension(){return n;}
};

void Ltri::set(int i,int j,int x){
  if(i>=j)
    a[n*(j-1)-(j-2)*(j-1)/2+i-j]=x;
}
int Ltri:: get(int i,int j){
  if(i>=j)
    return a[n*(j-1)-(j-2)*(j-1)/2+i-j];
  return 0;
}
void Ltri::Display(){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(i>=j) cout<<a[n*(j-1)-(j-2)*(j-1)/2+i-j]<<" ";
      else cout<<"0"<<" ";
    }
    cout<<endl;
  }
}

int main(){
cout<<"Enter the dimension of the array: ";
  int d; 
  cin>>d;
  Ltri lm(d);
  cout<<"Enter all the elements :";
  int x;
  for(int i=1;i<=d;i++){
    for(int j=1;j<=d;j++){
      cin>>x;
      lm.set(i,j,x);
    }
  }
  lm.Display();
  return 0;
}