#include<bits/stdc++.h>
using namespace std;
//1. Counting Vowels and consonents in a sentence.
//2.counting number of words
int main(){
   char A[]="How are you";
   int i,vcount=0,ccount=0,word=0;//vcount == vowel count
  for(i=0;A[i]!='\0';i++){
    if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'
    ||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U')
    {
        vcount++;
    }
    else if((A[i]>=65&&A[i]<=90)||(A[i]>=97&&A[i]<=122))
    ccount++;
    if(A[i]==' '&&A[i]-1!=' ')
    word++;
}  
cout<<vcount<<endl;
cout<<ccount<<endl;
cout<<word<<endl;
}