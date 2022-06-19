#include<bits/stdc++.h>
using namespace std;

int main(){

    int Arr[3]={3,2,1};
    int *p;
    p= new int[4];
    p[0]=1;
    p[1]=2;
    p[3]=3;
    for(int i=0;i<3;i++){
        cout<<Arr[i]<<" ";
        cout<<"\n";
    }
      for(int i=0;i<4;i++){
            cout<<p[i]<<" ";
    }
    return 0;
}