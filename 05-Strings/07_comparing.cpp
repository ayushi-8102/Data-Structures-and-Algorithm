#include<bits/stdc++.h>
using namespace std;

void print(vector<string>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
  cout<<endl;
}

int main()
{
     string s1;
     cout<<"Enter the first string :";
     cin>>s1;
      string s2;
       cout<<"Enter the second string :";
      cin>>s2;

if (s1 != s2)
    {
        cout << s1 << " is not equal to " << s2 << endl;
        if (s1 > s2)
            cout << s1 << " is greater than " << s2 << endl;
        else
            cout << s2 << " is greater than " << s1 << endl;
    }
    else
        cout << s1 << " is equal to " << s2 << endl;
}