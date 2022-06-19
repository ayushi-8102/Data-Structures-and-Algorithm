#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>p,pair<int,int>q){
  if(p.first!=q.first)
    return p.first>q.first;
  return p.second<q.first;
}

int main(){
  int n;
  cout<<"Enter the number of pairs :"<<endl;
  cin>>n;
  vector<pair<int,int>>p(n);
  for(int i=0;i<n;i++){
    cin>>p[i].first>>p[i].second;
  }
  sort(p.begin(),p.end(),cmp);
  for(int i=0;i<p.size();i++){
    cout<<p[i].first<<" "<<p[i].second<<endl;
  }
}