#include<bits/stdc++.h>
using namespace std;

void func1(int n){
    if(n>0){
        cout<<n<<" ";
        func1(n-1);
        func1(n-1);
    }
}

int main(){
    int a=3;
    func1(a);
    return 0;
}