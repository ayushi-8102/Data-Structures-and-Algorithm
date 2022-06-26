//They can be defined as a dynamic array
#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v){
    cout<<"Size "<<v.size();//size-->O(1)
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";


    }
    v.push_back(7);//no effect if we dont use &v in line 30
    //after using &v we get exact array and not the copy
    cout<<endl;

}
int main(){

    vector<int>v;
    //cout<<"enter the no of inputs";
    //int n;
    //cin>>n;
   v.push_back(2);
   v.push_back(0);
   v.push_back(4);
v.push_back(5);
    print(v);
    v.pop_back();
    print(v);
    print(v);
    vector<int>&v2=v; //O(n)-->expensive procedure
    print(v2);
    v2.push_back(6);
    print(v2);
}