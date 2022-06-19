#include<bits/stdc++.h>
using namespace std;


struct Rectangle{
int lenght;
int breath;
};
int main(){
//Rectangle r={20,30};
//cout<<r.lenght<<endl<<r.breath<<endl;
//Rectangle *p=&r;
Rectangle *p;//for dynamic allocation in heap
p= new Rectangle;
p->lenght=56;
p->breath=34;
cout<<p->lenght<<endl<<p->breath<<endl;


}