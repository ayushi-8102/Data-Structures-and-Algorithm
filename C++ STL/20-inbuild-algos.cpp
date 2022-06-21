#include<bits/stdc++.h>
using namespace std;
//inbuilt algorithms in cpp STL!
int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
    }

  int min =*min_element(v.begin(),v.end());//finds the min element
  cout<<"The minimum element in the given array is :"<<min<<endl;
  int max =*max_element(v.begin(),v.end());//finds the max element
  cout<<"The maximum element in the given array is :"<<max<<endl;
  //accumulate-->provides the sum of the elements
int sum = accumulate(v.begin(),v.end(),0);
//here the third argument is called initial sum means 0+ jo sum aayega
  cout<<"The sum of elements are :"<<sum<<endl;

  //count-->used to count the no of occurenes of a variable
  int ct = count(v.begin(),v.end(),3);
  //find-->finds the element
  cout<<"how many times is 3 present?"<<ct<<endl;
  auto it = find(v.begin(),v.end(),2);
  if(it!=v.end())
  cout<<"found?"<<*it<<endl;
  else cout<<"Element not found"<<endl;
  reverse(v.begin(),v.end());
  cout<<"The reverse string is :"<<endl;
  for(auto val:v){
    cout<<val<<" ";
  }
}
