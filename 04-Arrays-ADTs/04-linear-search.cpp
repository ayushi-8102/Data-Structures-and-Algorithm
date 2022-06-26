#include<bits/stdc++.h>
using namespace std;

struct Array{
   int A[20];
   int length;
   int size;

};
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
      cout<<arr.A[i]<<" ";
    }
}
//for improving linear search 1. via transpositin 2. via move to head

void swap(int *x,int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int linear_search(struct Array *arr,int key){
   for(int i=0;i<arr->length;i++){
     if(arr->A[i]==key){
       swap(&arr->A[i],&arr->A[i-1]);//transporsition
       //move to head mein bas y ki value a[0] ho jayegi!
       return i;
       }
   }
    return -1;
}


int main(){
 struct Array arr1={{1,2,3,4,5},10,5};
 
 cout<<"Linear search result : "<<linear_search(&arr1,2)<<endl;
  display(arr1);


    return 0;
}