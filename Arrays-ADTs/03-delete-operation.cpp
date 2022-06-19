#include<bits/stdc++.h>
using namespace std;

struct Array{
   int A[20];
   int length;
   int size;

};
void display(struct Array &arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}
void Delete(struct Array *arr,int index){
  if(index<arr->size){
    for(int i=index;i<arr->length-1;i++){
      arr->A[i]=arr->A[i+1];
    }
    arr->length--;
  }
}

int main(){
 struct Array arr1={{1,2,3,4,5},10,5};
  Delete(&arr1,2);
  display(arr1);
  


    return 0;
}