#include<bits/stdc++.h>
using namespace std;

int * func(int n){
    int *p;
    p= new int[n];
    for(int i=0;i<n;i++){
        p[i]=i+1;
    }
    return p;
}
int main(){
int n;
cout<<"Enter the size of your array";
cin>>n;
int *ptr;
ptr = func(n);
 for(int i=0;i<n;i++){
     cout<<ptr[i]<<" ";
 }
 return 0;
}