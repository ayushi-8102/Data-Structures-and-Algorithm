#include<bits/stdc++.h>
using namespace std;

int subsetdiffcount(vector<int>arr,int n,int sum){
  int t[n+1][sum+1];
  //initialization
  for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
      if(i==0) t[i][j]=0;
      if(j==0) t[i][j]=1;
    }
  }
  for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
      if(arr[i-1]<=j){
        t[i][j]= t[i-1][j-arr[i-1]] + t[i-1][j];
        
      }
      else
        t[i][j]=t[i-1][j];
    }
  }
  return t[n][sum];
}
int main(){
vector<int>arr;
 
int n;
  cout<<"Enter the size of vectors :"<<endl;
  cin>>n;
int sum,x;
int s=0;
cout<<"Enter the  array"<<endl;
for(int i=0;i<n;i++){
  cin>>x;
   arr.push_back(x);
}
for(int i=0;i<n;i++){
    s+=arr[i];
}
int diff;
cout<<"Enter the subset differnce required: "<<endl;
cin>>diff;
 sum=(diff+s)/2;
 cout<<"----------------------------------"<<endl;
  cout<<"The number of subsets present are: "<< subsetdiffcount(arr,n,sum)<<endl;
return 0;
}