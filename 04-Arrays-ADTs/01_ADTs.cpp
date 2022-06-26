#include<bits/stdc++.h>
using namespace std;



struct Array {
    int *a;
    int size ;
    int length;
};
void display(struct Array arr) {
for(int i=0;i<arr.length;i++){
    cout<<arr.a[i]<<" ";
}
}
int main(){
struct Array arr;
cout<<"Enter the size of array : ";
cin>>arr.size;
arr.a=new int[arr.size];
arr.length=0;
int n;
cout<<"Enter the number of elements array : ";
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr.a[i];
    arr.length=n;
}

display(arr);

    return 0;
}