// Kth Smallest Number
#include<bits/stdc++.h>
using namespace std;
#define pair<int,pair<int,int>> ppi;

int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int k;
  cin>>k;
  priority_queue<int,vector<int>,greater<int>> MinH;
  for(int i=0;i<n;i++){
    MinH.push(arr[i]);
    if(MinH.size()>k)MinH.pop();
  }
  int ans= MinH.top();
  cout<<ans<<endl;
}