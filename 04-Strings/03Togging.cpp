#include<bits/stdc++.h>
using namespace std;

int main(){
    char A[]="We5CoME";
    for(int i=0;A[i]!='\0';i++){
        if(A[i]>='A'&&A[i]<='Z'){
            A[i]+=32;//cause large ko small karne ke liye +32 karna hota haio ASCII Code mein.
        }
        else if(A[i]>='a'&&A[i]<='z'){
            A[i]-=32;
        }
    }
    cout<<A;
}