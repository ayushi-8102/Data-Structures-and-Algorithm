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
  priority_queue<int> MaxH;
  for(int i=0;i<n;i++){
    MaxH.push(arr[i]);
    if(MaxH.size()>k)MaxH.pop();
  }
  int ans= MaxH.top();
  cout<<ans<<endl;
}