//LEARNING POINTERS
//Introduction Via code

#include<iostream>
using namespace std;

int main(){
   //Pointers to Pointers
   
     
    return 0;
}
 
 void intro(){
      int a=5; //integer
    int *p; //pointer to integer
    p=&a; //adress of integer
    cout<<"a is :"<<a<<endl;
    cout<<"P is :"<<p<<endl;
    cout<<"p+1 is :"<<p+1<<endl;//increased by 4 as integer has 4 bit space
    cout<<"*p is :"<<*p<<endl;
    *p=14;
    cout<<"*p is : "<<*p<<endl; //derefrencing

 }

 void step2(){
      //pointer types,void pointer, pointer arthimetic
    int a=20;
    int *a1;
    char *ch;
    a1=&a;
    ch = (char*)a1;//typecasting
    cout<<"The size of int is"<<sizeof(a)<<endl;
    cout<<"The address and value of ch is :"<<*ch<<endl;
 }