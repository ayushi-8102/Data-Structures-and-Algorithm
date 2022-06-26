#include<bits/stdc++.h>
using namespace std;

int exp(int x,int n){
    static int p=1;
    static int f= 1;
    int r;
    if(n==0){
        return 1;
    }
    else{
        r=exp(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
    int n,x;
    cout<<"Enter the number whose factorial you want to find: ";
    cin>>x;
    n=x;
  cout<< exp(x,n);
return 0;
}