//set bit (replace 0 with 1 in the given position of a given number)
#include <iostream>
using namespace std;
int setbit(int n, int pos){
    return(n |( 1<<pos));
}
int main(){
cout<< setbit(5,3)<<endl;
return 0;
}