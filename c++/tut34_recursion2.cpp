#include <iostream>
using namespace std;
int factorial(int n){
    if(n==1){return 1;}
    int prevFac= factorial(n-1);
    return n* prevFac;
}
int main(){
cout<<factorial(5)<<endl;
return 0;
}