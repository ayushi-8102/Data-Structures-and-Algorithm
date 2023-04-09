#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m; //number of nodes and edges;
     int adj[n+1][m+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
}