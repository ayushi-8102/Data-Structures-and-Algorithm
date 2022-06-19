#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<A[i][j]<<" ";
            
    //     }
    //     cout<<"\n";
    // }
    //single pointer to array 2D representation
    int *B[3];
    B[0]= new int[4];
    B[1]=new int[4];
    B[2]= new int[4];
    int count = 11;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            B[i][j] = ++count;
 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<B[i][j]<<" ";
            
        }
        cout<<"\n";
    }
     cout<<"\n"; cout<<"\n"; cout<<"\n"; cout<<"\n";
//USING DOUBLE POINTERS
int **C;
C= new int*[3];
C[0]= new int[4];
C[1]= new int[4];
C[2]= new int[4];
 int countn = 30;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            C[i][j] = ++countn;
 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    return 0;
}
