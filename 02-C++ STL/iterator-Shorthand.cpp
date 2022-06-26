
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>v={1,2,3,4,5,6};

  //for(int i=0;i<v.size();i++){
  //  cout<<v[i]<<" ";
 // }
 // cout<<endl;

  vector<int>:: iterator it;
  for(int &value:v){//we use refrences calue this loop makes copy of the elements so operation wont work directly!
    value++;
    cout<<value<<" ";
  }
  cout<<endl;
   for(int value:v){
    value++;//example of above explaination!
    cout<<value<<" ";
  }
  cout<<endl;
  cout<<endl;
vector<pair<int,int>> a ={{1,2},{2,3},{4,5}};
  for(pair<int,int>&value:a){
    cout<<value.first<<" "<<value.second<<endl;
  }
  cout<<endl;
  //The auto keyword
  //it determines the variable type on its own
  auto i=1.0;
  cout<<i;
  cout<<endl;
  cout<<endl;
  vector<pair<int,int>>b ={{2,2},{3,3},{5,5}};
  for(auto &value:b){
    cout<<value.first<<" "<<value.second<<endl;
  }
}