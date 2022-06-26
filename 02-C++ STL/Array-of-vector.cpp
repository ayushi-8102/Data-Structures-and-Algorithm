#include<bits/stdc++.h>
using namespace std;

void print(vector<int>&v){
    cout<<"Size "<<v.size();//size-->O(1)
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
    int main(){
        int N;
        cin>>N;
    vector<int>v[N];//this is array of vector matlan agar N=10 hoga toh 10 alag alag vector honge
    for(int i=0;i<N;i++){
        int n;//for each vector input
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
          v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
    print(v[i]);}
    }