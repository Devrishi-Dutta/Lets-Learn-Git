#include <iostream>
using namespace std;

int main(){
int a=10;
int *p= new int;// allocating memory to heap
*p=10;
delete(p);  // deallocation memory from heap
p = new int [4]; // reallocating memory in heap in the form of array
delete []p;    // deallocating again
p=NULL;  // deleting pointer 'p' from stack

return 0;
}