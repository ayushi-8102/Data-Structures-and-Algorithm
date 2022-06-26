#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the elements of the array:";
    int arr[100];
    int lenght = arr[100]/arr[0];
    for(int i=0;i<lenght;i++){
        cin>>arr[i];
    }
    cout<<"The array is :";
    for(int i=0;i<lenght;i++){
        cout<<arr[i];
    }
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    for(int i=0;i<lenght;i++){
      if(key==arr[i])
    cout<<i;}
    
    return 0;
}