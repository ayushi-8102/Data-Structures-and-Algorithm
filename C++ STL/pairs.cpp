#include<bits/stdc++.h>
using namespace std;

int main(){
pair<int,string>p;
//p=make_pair(2,"ayushi");
p={2,"ayushi"};

cout <<p.first<<" "<<p.second<<endl;

pair<int,int>a[3];
a[0]={1,2};
a[1]={3,4};
a[2]={5,6};
swap(a[1],a[2]);
for(int i=0;i<3;i++){
  cout<<a[i].first<<" "<<a[i].second<<endl;
}

return 0;
}