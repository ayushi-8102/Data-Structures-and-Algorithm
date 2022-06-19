#include<bits/stdc++.h>
using namespace std;
//solution for max profit question using memotization!
int KnackSnap(vector<int>wt,vector<int>val,int W,int n){
  int t[n+1][W+1];
  memset(t,-1,sizeof(t));
    if(n==0||W==0)return 0;
  if(t[n][W]!=-1)return t[n][W];
    if(wt[n-1]<=W){
        return t[n][W]= max(val[n-1]+KnackSnap(wt,val,W-wt[n-1],n-1),KnackSnap(wt,val,W,n-1));
    }
    else if(wt[n-1]>W) 
        return t[n][W]= KnackSnap(wt,val,W,n-1);
   return 0; 
}
int main(){
vector<int>wt;
  vector<int>val;
int n;
  cout<<"Enter the size of vectors :"<<endl;
  cin>>n;
int W,x,y;
cout<<"Enter the weight array"<<endl;
for(int i=0;i<n;i++){
  cin>>x;
   wt.push_back(x);
}
 cout<<"Enter the values for respective weights :"<<endl;
 for(int i=0;i<n;i++){
   cin>>y;
   val.push_back(y);
 }
 cout<<"Enter the maximum capacity of the bag :";
 cin>>W;
 cout<<"The maximum Profit here is :"<<KnackSnap(wt,val,W,n);
return 0;
}