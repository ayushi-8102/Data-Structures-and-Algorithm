/*
You will be given a graph with N
 nodes represented as an Adjacency matrix. Convert it into its equivalent Adjacency list and print in the format as given in the output section. As a refresher, in a Adjacency Matrix M
, Mij
 represents 1 iff there exists an edge between ith & jth node.

1≤N≤100

0≤Mij≤1
INPUT
First line contains an integer N
, representing size of a square matrix.

Next N
 lines contain N
 integer each representing the given Adjacency Matrix.

OUTPUT
Print N
 lines. ith
 line begins with "i: " prefix followed by all nodes that share an edge with ith
 node separated by space. See sample for clarity.

EXAMPLE
Sample 1 INPUT:

4
0 1 0 1
1 0 1 0
0 1 1 1
1 0 1 1

Sample 1 OUTPUT:

1: 2 4 
2: 1 3 
3: 2 3 4 
4: 1 3 4 
*/
#include<bits/stdc++.h> 
using namespace std;

int main(){
  int n;
  cin>>n;
  int v[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>v[i][j];
    }
  }
  for(int i=0;i<n;i++){
    cout<<i+1<<":"<<" ";
    for(int j=0;j<n;j++){
    if(v[i][j]==1)cout<<j+1<<" ";
    }
    cout<<endl;
  }
   // for(int i=0;i<n;i++){
    
   //  for(int j=0;j<n;j++){
   //  cout<<v[i][j]<<" ";
   //  }
   //  cout<<endl;
  }
