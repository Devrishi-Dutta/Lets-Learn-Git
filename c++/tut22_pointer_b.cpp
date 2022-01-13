#include <iostream>
using namespace std;

int main(){
char ch='s';
char *cptr=&ch;
cout<<cptr<<endl;
cout<<*cptr<<endl;
cout<<++cptr<<endl;
return 0;
}