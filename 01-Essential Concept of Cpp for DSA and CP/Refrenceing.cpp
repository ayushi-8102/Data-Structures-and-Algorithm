#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int &r=a;//refrence(nickname)
    cout<<a<<endl<<r<<endl;
    r=30;
     cout<<a<<endl<<r<<endl;
     int b=23;
     r=b;
     cout<<a<<endl<<r<<endl;
    return 0;
}