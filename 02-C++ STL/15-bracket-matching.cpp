#include<bits/stdc++.h>
using namespace std;
//important question done by using stacks 
//balanced parenthesis
string isBalanced(string s) {
 unordered_map<char,int>m={{'{',-1},{'(',-2},{'[',-3},{'}',1},{')',2},{']',3}};//can be used without maps using if conditions;refer gfg for this
  stack<char>st;
  for(int i:s){
    if(m[i]<0)
    st.push(i);
    else{
    if(st.empty())return "NO";
    char top= st.top();
      st.pop();
      if(m[top]+m[i] !=0)
        return "NO";
    }
  }
  if(st.empty()) return "YES";
  return "NO";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<isBalanced(s)<<endl;
  }

}
