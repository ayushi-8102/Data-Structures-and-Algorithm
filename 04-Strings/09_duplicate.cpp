#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string>a;
     a.push_back(s);
     int count = 0;
     for(int i=0;i<a.size();i++){
          for(int j=0;j<a.size();j++){
              if(a[i]==a[j])
              count++;
          }

     }
     cout<<"So, the number of repetation is:"<<count;
}