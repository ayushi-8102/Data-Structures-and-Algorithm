
#include<bits/stdc++.h>
using namespace std;

struct Array{
int a[20];
int length;
int size;
};
//1.by using loops
int binarysearch(struct Array *arr1,int key){
  int l= 0;
  int h=arr1->length-1;
  int mid;
 while(l<=h)
 {
 mid=(l+h)/2;
 if(key==arr1->a[mid])
 return mid;
 else if(key<arr1->a[mid])
 h=mid-1;
 else
 l=mid+1;
 }
  return -1;//not found
}
//using recursion
int RBinSearch(int a[],int l,int h,int key)
{

 int mid=0;
 if(l<=h)
 {
 mid=(l+h)/2;
 if(key==a[mid])
 return mid;
 else if(key<a[mid])
 return RBinSearch(a,l,mid-1,key);
 else
 return RBinSearch(a,mid+1,h,key);
   }
return -1;
}
int main(){
 struct Array arr1={{10,20,23,34,45,67,78,99},10,8};
cout<<"The result of binary search using loops  is: "<< binarysearch(&arr1,34)<<endl;
  cout<<"The result of binary search using recursion is:"<<RBinSearch(arr1.a,0,arr1.length,34)<<endl;
  return 0;
}