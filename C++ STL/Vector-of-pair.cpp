#include<bits/stdc++.h>
using namespace std;
//very useful in CP
void print(vector<pair<string,string>>&v){
    cout<<"Size "<<v.size();//size-->O(1)
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
    int main()
    {
     vector<pair<string,string>>v;
      int n;
      cin>>n;
      for(int i=0;i<n;i++){
          string x,y;
          cin>>x>>y;
          v.push_back({x,y});
          print(v);
      }
    }