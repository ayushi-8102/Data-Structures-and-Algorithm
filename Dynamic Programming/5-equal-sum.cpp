#include<bits/stdc++.h>
using namespace std;

bool subsetsum(vector<int>arr,int n,int sum){
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
           if(i==0)t[i][j]=false;
           if(j==0)t[i][j]=true;
    }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j]= t[i-1][j-arr[i-1]]||t[i-1][j];

            }
            else
            t[i][j]=t[i-1][j];
        }
    }
    return t[n][sum];
}

bool equalsubset(vector<int>arr,int n){
    int sumi =0;
    for(int i=0;i<n;i++){
        sumi+=arr[i];
    }
    if(sumi%2!=0)return false;
    else if (sumi%2==0)
    return subsetsum(arr,n,sumi/2);
}
int main(){
vector<int>arr;
 
int n;
  cout<<"Enter the size of vectors :"<<endl;
  cin>>n;
int W,x;
cout<<"Enter the  array"<<endl;
for(int i=0;i<n;i++){
  cin>>x;
   arr.push_back(x);
}
 
 cout<<"Enter the maximum sum :";
 cin>>W;
 cout<<"Do there exist a subset? :"<< subsetsum(arr,n,W)<<endl;//1-->true 0-->false
  cout<<"----------------------------------"<<endl;
 cout<<"Do there exist an Equal Subset Sum? : "<<equalsubset(arr,n);
return 0;
}