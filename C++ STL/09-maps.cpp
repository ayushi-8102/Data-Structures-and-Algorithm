#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
    cout<<"The size is :"<<m.size();
    for(auto &it:m){
         cout<<it.first<<" "<<it.second<<endl;
     }

}
int main(){
     map<int,string>m;
     m.insert({1,"abs"});
     m.insert({5,"cds"});
     m.insert({3,"cse"});
     print(m);

     //find operation works using itrator
     auto fi= m.find(3);
     if(fi==m.end()){
      cout<<"not found"<<endl;
     }
     else{
         cout<<(*fi).first<<" "<<(*fi).second<<endl;
     }
     //erase function
     m.erase(5);
     print(m);
     
    return 0;
}