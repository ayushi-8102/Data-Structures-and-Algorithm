#include<bits/stdc++.h>
using namespace std;
//0-1 knapsack using top down approach
bool SubsetSum(vector<int>arr,int W,int n){
  bool t[n+1][W+1];
   //Initialize matrix -->Base Condition
 for(int i=0;i<n+1;i++){
   for(int j=0;j<W+1;j++){
     if(i==0) t[i][j]=true;
      if(j==0) t[i][j]=false;
   }
 }
   //Choice Diagram to code
  for(int i=1;i<n+1;i++){
   for(int j=1;j<W+1;j++){
      //1. In case of choice
     if(arr[i-1]<=j){
         t[i][j] = t[i-1][j-arr[i-1]]||t[i-1][j];
     }
       //No choice
     else if(arr[i-1] > j){
                    t[i][j] = t[i-1][j];
                }
     }
    }
  return t[n][W];
}
int main(){
vector<int>arr;
 
int n;
  cout<<"Enter the size of vectors :"<<endl;
  cin>>n;
int W,x,y;
cout<<"Enter the  array"<<endl;
for(int i=0;i<n;i++){
  cin>>x;
   arr.push_back(x);
}
 
 cout<<"Enter the maximum sum :";
 cin>>W;
 cout<<"Do there exist a subset? :"<<SubsetSum(arr,W,n);//1-->true 0-->false
return 0;
}