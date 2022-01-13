//pointer of pointer
#include <iostream>
using namespace std;

int main(){
int a=10;
cout<<&a<<endl;
int *p=&a;
cout<<p<<endl;
int **q=&p;
cout<<q<<endl;// &p
cout<<*q<<endl;// p or &a
cout<<**q<<endl;// a
return 0;
}