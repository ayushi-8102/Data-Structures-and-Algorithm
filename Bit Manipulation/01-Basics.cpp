#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

int main(){
cout<<INT_MAX<<endl;
  /*How to Print power of 2?
  1<<n==2^n
 ex :  1<<3==2^3
    */
  int a=((1LL<<31)-1);//signed int only stoores 31 bits. 1 bit is reserved for negative/positive signed nos.
  cout<<a<<endl;
  unsigned int b=((1LL<<32)-1);//Unsigned int stores 32 bits.
  cout<<b<<endl;
  
}