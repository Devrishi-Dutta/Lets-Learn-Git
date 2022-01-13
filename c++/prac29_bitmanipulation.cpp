// write a program to chheck if a given number is power of 2 using bitmanipulation
#include <iostream>
using namespace std;
bool powerof2(int n){
//    if(n==0){ return (1);}
//    else{return(!(n & n-1));}
return (n && !(n & n-1));
 }
int main(){
cout<<powerof2(15)<<endl;
return 0;
}
//eg->
// 8 = 1000
// 7= 0111
// 8 & 7 = 0000