// print the nth fibonacci number(0,1,1,2,3,5,8,13,....)
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1){return 0;}
    else if(n==2){return 1;}
    return fibonacci(n-1) +fibonacci(n-2);}

    int main(){
        cout<<fibonacci(8)<<endl;
    }
