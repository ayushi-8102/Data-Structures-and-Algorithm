//When a function calls itself then it is called a recursive function.

#include<bits/stdc++.h>
using namespace std;

void func1(int x){
    if(x>0){
cout<<x<<" ";
func1(x-1);//recursive call
    }
}
void func2(int x){
    if(x>0){
        func2(x-1);
        cout<<x<<" ";
    }
}


int main(){
    int n;
    cout<<"Enter the starting value :";
    cin>>n;
    cout<<"In Reverse Order :";
    func1(n);
    cout<<endl;
    cout<<endl;
    cout<<"In accending Order :";
    func2(n);

    return 0;
}
