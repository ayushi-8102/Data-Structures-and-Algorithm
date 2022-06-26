#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0)
    return 1;
    else
    return factorial(n-1)*n;
   
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The Factorial of "<<n<<"numbers is : "<<factorial(n);
   return 0;
}