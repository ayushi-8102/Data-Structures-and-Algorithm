#include<bits/stdc++.h>
using namespace std;

int power(int m, int n){
    if(m==0)
    return 1;
    else
    return power(m-1,n)*n;
}

int main(){
    int m,n;
    cout<<"Enter power and no. respectively : ";
    cin>>m>>n;
    cout<<"The ans is :"<<power(m,n);
}