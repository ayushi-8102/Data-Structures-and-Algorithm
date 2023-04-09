#include<bits/stdc++.h>
using namespace std;

int cielarr(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int result;
    while(s<=e){
     int mid=s+(e-s)/2;
     if(arr[mid]==key)return arr[mid];
     else if(arr[mid]>key) {
        result=arr[mid];
         s=mid+1;
     }

     else 
     e=mid-1;
     
    }
return result;
}
int main(){
    int n=9;
    int arr[]={1,2,3,4,8,10,10,12,29};
    int ele=5;
    return cielarr(arr,n,ele);
}