#include<bits/stdc++.h>
using namespace std;


int fun1(int n){
if(n>100){
    return n-10;
    }
     else{
    return fun1(fun1(n+11)); //A NESTED RECURSION 
    }  
}
int main(){
int a=95;
cout<<fun1(a);
    return 0;
}