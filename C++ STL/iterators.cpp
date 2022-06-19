
#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>v={1,2,3,4,5,6};

  //for(int i=0;i<v.size();i++){
  //  cout<<v[i]<<" ";
 // }
 // cout<<endl;

  vector<int>:: iterator it=v.begin();
  for(it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
  }
  cout<<endl;
vector<pair<int,int>> a ={{1,2},{2,3},{4,5}};
vector<pair<int,int>> :: iterator cs;
for(cs=a.begin();cs!=a.end();cs++){
  cout<<(*cs).first<<" "<<(*cs).second<<endl;
}
  cout<<endl;
  
for(cs=a.begin();cs!=a.end();cs++){
  cout<<cs->first<<" "<<cs->second<<endl;
}
}