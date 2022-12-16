//How Binary Search Works?
#include <bits/stdc++.h>
using namespace std;
 
void mainSolve()
{
  int D;
  cin >> D;
  string num = "";
  cin >> num;
  for(int i=0;i<D;i++){
    char ch = num[i];
    if(ch == '5' || ch=='0'){
      cout << "Yes" << endl;
      return;
    }
  }
  cout << "No" << endl;
}
 
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    mainSolve();
  }
  return 0;
}