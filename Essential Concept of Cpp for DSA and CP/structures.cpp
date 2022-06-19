#include <iostream>
using namespace std;
struct Student{
  int rollno;
  char firstn[20];
  char lastn[30];
  char email[50];
  char deparment[20];
  int sem;
};  //; is neccessary
struct Rectangle{
int lenght;
int breath;
};
int main() {
  cout << "Hello World!\n";
  struct Student info[20] = {{12,"Ayushi","Shukla","sus@gmail.com","cse",4},{22,"Mitali","Sharma","mus@gmail.com","MBBS",4}};

  cout<<info[0].firstn<<endl;
  cout<<info[1].lastn<<endl;

  //2. Example
  struct Rectangle r;
  r.lenght=12;
  r.breath=23;
  cout<<"The area is : "<<r.lenght*r.breath<<endl;
}