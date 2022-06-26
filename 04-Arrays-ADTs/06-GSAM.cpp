
#include<bits/stdc++.h>
using namespace std;

struct Array{
int a[20];
int length;
int size;
};
//1.get
int get(struct Array *arr, int index ){
  if(index>=0&&index<arr->length)
    return arr->a[index];
  return -1;
}
//2.set
void Set(struct Array *arr,int index,int x){
 if(index>=0&&index<arr->length)
   arr->a[index]=x;
}
//3.max
int max(struct Array *arr){
  int max;
  max=arr->a[0];
  for(int i=0;i<arr->length;i++){
    if(arr->a[i]>max)
      max=arr->a[i];
  }
  return max;
}

//4.min
int min(struct Array *arr){
  int min;
  min=arr->a[0];
  for(int i=0;i<arr->length;i++){
    if(arr->a[i]<min)
      min=arr->a[i];
  }
  return min;
}

//5. Sum
int sum(struct Array *arr){
  int sum=0;
  for(int i=0;i<arr->length;i++){
    sum=arr->a[i]+sum;
  }
  return sum;
}
//6. Avg
float Avg(struct Array arr)
{
 return (float)sum(&arr)/arr.length;
}
int main(){
 struct Array arr={{10,20,23,34,45,67,78,99},10,8};
 cout<<"Get function"<<get(&arr,3)<<endl;
   Set(&arr,1,33);
  cout<<"Max functtion :"<<max(&arr)<<endl;
  cout<<"Min function :"<<min(&arr)<<endl;
  cout<<"Sum :"<<sum(&arr)<<endl;
  cout<<"Average :"<<Avg(arr)<<endl;
  return 0;
}