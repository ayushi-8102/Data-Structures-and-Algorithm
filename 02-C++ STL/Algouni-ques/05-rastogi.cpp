#include <bits/stdc++.h>
using namespace std;
bool isDigitd(long long i,unordered_set<int>st){
  while (i > 0) {
        int rem = i % 10;
        if (st.find(rem) != st.end()) {
            return true;
        }
        i = i / 10;
    }
    return false;
}
int main() {
  int t;
 cin>>t;
 unordered_set<int>st;
  for(int i=0;i<t;i++){
   int s;
    cin>>s;
   st.insert(s);
  }
  long long n;
  cin>>n;
  long long count=0;
  for (long long i = 1; i <=n; i++) {
        if (isDigitd(i,st) == false) {
            count++;
            if (count == n) {
                count = i; 
                break; 
                       
            }
        }
    }
    cout<<count;
  
  
}