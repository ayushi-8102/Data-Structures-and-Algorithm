#include<bits/stdc++.h>
using namespace std;

int minno(vector<int>&v){
    int n= v.size()-1;
    int s=v[0];
    int e=v[n-1];
    if(v[0]<=v[n-1])return v[0];
    while(s<=e){
    int mid=s+(e-s)/2;
    int prev=(mid-1+n)%n;
    int next = (mid+1)%n;
    if(v[mid]<=v[prev])return v[mid];
    
    }
}