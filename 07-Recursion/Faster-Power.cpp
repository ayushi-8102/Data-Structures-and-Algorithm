#include<bits/stdc++.h>
using namespace std;
//This code will have less number of steps in recursive tree !

int power(int m, int n){
    if(m==0)
    return 1;
    else if (m%2==0)
    return power(m/2,n*n);
    else 
    return n*power((m-1)/2,n*n);
}

int main(){
    int m,n;
    cout<<"Enter power and no. respectively : ";
    cin>>m>>n;
    cout<<"The ans is :"<<power(m,n);
}