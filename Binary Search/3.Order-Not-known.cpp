#include<bits/stdc++.h>
using namespace std;

int sort_array(int A[], int size,int front,int back,int key){
    if(A[0]>A[size-1]){
        cout<<"Array is in descending order";
        int mid=front+(back-front)/2;
        if(A[mid]==key){
            return mid;
        }
        if(A[mid]>key){
            return sort_array(A, size,mid+1,back,key);
        }
        if(A[mid]<key){
            return sort_array(A, size, front, mid-1,key);
        }

    }
    return -1;
    if(A[0]<A[size-1])
    {
        cout<<"Array is in ascending order\n";
        int mid=front+(back-front)/2;
        if(A[mid]==key){
            return mid;
        }
        if(A[mid]<key){
            return sort_array(A, size,mid+1,back,key);
        }
        if(A[mid]>key){
            return sort_array(A, size, front, mid-1,key);
        }

    }
    return -1;
    

}
int main(){
    int A[]={10,6,4,2,1,0};
    int n=sizeof(A)/sizeof(A[0]);
    int result;
    int front=0;
    int back=n-1;
    int key=4;
    result=sort_array(A,n,front,back,key);
    (result==-1)?cout<<"element not found":cout<<"Element fount at index "<<result<<endl;
}