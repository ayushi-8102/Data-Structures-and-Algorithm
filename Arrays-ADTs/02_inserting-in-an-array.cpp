#include<bits/stdc++.h>
using namespace std;


struct Array{
 int a[20];
 int size;
 int lenght;

};
void display(struct Array arr){
    for(int i=0;i<arr.lenght;i++){
      cout<<arr.a[i]<<" ";
    }
}
//adding
void append(struct Array *arr,int x){
  if(arr->lenght<arr->size)
    arr->a[arr->lenght++]=x;
  
}
//inserting
void insert(struct Array *arr,int index,int x){
  if(index>=0 && index <=arr->lenght)
  {
    for(int i=arr->lenght;i>index;i--){
      arr->a[i]=arr->a[i-1];
      arr->a[index]=x;
      arr->lenght++;
      
    }
  }
}
int main(){
   struct Array arr1={{1 ,2,3,4,5},10,5};
    
     append(&arr1,10);
    insert(&arr1,2,77);
      display(arr1);
  
    return 0;
}