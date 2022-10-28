/* ek aaray diya hai. Fir kcch test checks hain to know that voh number hamare array mein kitni baar aaye.
Given array of N integer.Given Q queries and in each query given L and R , Print the sum of elements from index L to index R in the array.
Constraints:
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
  */

#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int ps[N];
int main() {
  
  int n;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
    ps[i]=ps[i-1]+a[i];
  }
	int q;
cin>>q;
  while(q--){
    int l,r;
    cin>>l>>r;
   cout<<ps[r]-ps[l-1]<<endl;
  }
    
}
//O(N)+O(N)~=O(N)