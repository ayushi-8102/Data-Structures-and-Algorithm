#include<bits/stdc++.h>
using namespace std;

int x=0;//global int
int func1(int n){
   
//static int x=0; ----->static int(both have same function!)
if(n>0){ 
    x++;
return func1(n-1)+x;
}
return 0;
}

int func2(int n){
    if(n>0){
        return func2(n-1)+n;
    }
    return 0;
}

int main(){
int a=5;

 cout<<"The value of function when an int x is introduced static or global is "<< func1(5)<<endl;
 cout<<"The value of function when local varaible n is incremented "<< func2(5);
}