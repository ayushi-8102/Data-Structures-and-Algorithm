#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

void printBinary(int num){
  for(int i=10;i>=0;i--){
    cout<<((num>>i)& 1);
  }
  cout<<endl;
}
int main(){
printBinary(9);
  printBinary(~9);//Inverse o ka 1 1 ka 0
  
  int a=9;
  int i=2;//check if second bit is set or unset
  //check set or unset
  if((a&(1<<i))!=0)
    cout<<"set bit";
  else cout<<"Unset bit"<<endl;

  //To set a bit
  int m=2;
  printBinary(a|(1<<m));

  //To Unset a bit
  printBinary(a&(~(1<<0)));//1st bit unset using and and toggle

  //Toggle
  printBinary(a^(1<<2));//Toggling of second bit

  //Cout the no. of 1s 
  int cnt=0;
  for(int i=31;i>=0;i--){
    if((a& (1<<i)) !=0)cnt++;
  }
  cout<<cnt<<endl;
}