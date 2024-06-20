// #include<bits/stdc++.h>
// using namespace std;
// #define pair<int,pair<int,int>> ppi;
/*
Heap --> Types : Min Heap(k,largest element), Max Heap(k,smallest element)
Declare Heap : priority_queue<int> MaxH;
Min Heap: priority_queue<int,vector<int>,greater<int>> MinH;
priorty_queue<ppi,vector<ppi>,greater<ppi>> MinH;
Steps to follow :
1. Push elements into heap(same as stack)
2. When size>k , pop the top element
3. traverse the whole array like this
4. Return the largest element(at the top in last)
Functions in syl: top, pop, push, size, empty
*/


#include<bits/stdc++.h>
#define pair<int,pair<int,int>> ppi;
using namespace std;
//Kth Smallest Number
int KthSmallest(vector<int>arr,int k){
    priority_queue<int> MaxH;
      for(int i=0;i<arr.size();i++){
        MaxH.push(arr[i]);
        if(MaxH.size()>k)MaxH.pop();
      }
      int ans= MaxH.top();
    return ans;
}
//Kth Largest Number
int KthLargest(vector<int>arr,int k){
    priority_queue<int,vector<int>,greater<int>> MinH;
      for(int i=0;i<arr.size();i++){
            MinH.push(arr[i]);
        if(MinH.size()>k)MinH.pop();
      }
      int ans= MinH.top();
    return ans;
}
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int k;
  cin>>k;
cout<<"The Smallest "<<k<<"th number is"<<endl;
  cout<<KthSmallest(arr,k)<<endl;
    cout<<"The Largest "<< k<<"th number is :"<<endl;
      cout<<KthLargest(arr,k)<<endl;
    return 0;
}