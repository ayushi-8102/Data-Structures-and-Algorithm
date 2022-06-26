#include<bits/stdc++.h>
using namespace std;
void B(int n);//since called before defining in A so Function prototype is neccesary!
void A(int n){
    if(n>0){
        cout<<n<<" ";                     //    A(20)
        B(n-1);
                                   //            / \
    
                                           //    20 B(19)
}   }                                           //  /\
                                                // 19 A(9)
                                                 //    / \
                                                  //   9 B(8)
void B(int n){                                       // / \
                                                   //   8  A(4)
    if(n>1){                                         //    / \
                                                     //   4  B(3)
        cout<<n<<" ";                                  //     / \
       
        A(n/2);                                          //   3  A(1)
    }                                                     //     / \
                                                          //   1  B(0)
}
int main(){
    int a = 20;
    A(a);
    return 0;
}