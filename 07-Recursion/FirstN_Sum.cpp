#include<bits/stdc++.h>
using namespace std;


int sum(int n){ // T.C.---->O(n);S.C.--->O(n),hence not the best 
 if(n==0)
 return 0;
 else
 return sum(n-1)+n;
}
int main(){

int n;
cout<<"Enter N : ";
cin>>n;
cout<<"The sum of first "<<n<<" natural numbers is ";
 cout<<sum(n);
    return 0;

//better apporpach
//return n*(n+1)/2;------->T.c.-->O(1)
//or if we use loop------>T.C. --->O(n),but space less!
}