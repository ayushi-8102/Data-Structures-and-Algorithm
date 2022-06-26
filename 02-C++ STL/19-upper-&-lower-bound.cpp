#include<bits/stdc++.h>
using namespace std;
//They only work in sorted array or data structures
//lower bound tab use karte hn jab humein kisi bhi number ko
//nikalna ho ya usse bada return karega agar vo no. exist nahi karta hoga toh 
//ex: In an array ex : 4 5 5 7 8 25
// lower bound of 5 is 5
// of 7 is 7 but of 6 is 7 since 6 not present so next greater presnt 
// element will be returned for 25 it will give the pointer value 
// since no no is presnet after that
//Now upper bound hamesha badi hi value 
//return karega like 5 ka 7 ; 7 ka 8 ; 3 ka 4; and so on...
//aur ye hamesha hi address return karte hn

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>m;
    for(auto i:v){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
   
    sort(v.begin(),v.end());

    auto it = upper_bound(v.begin(),v.end(),5);
    if(it==v.end()){
       cout<<"Not found";
       return 0;
    }
    cout<<(*it)<<endl;  

}