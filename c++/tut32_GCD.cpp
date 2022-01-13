// euclid algorith to find GCD
#include <iostream>
using namespace std;

int main(){
cout<< "enter";
int a,b;
cin>> a>>b;

int c= a%b;
while(b>0){
    c=a%b;
    a=b;
    b=c;
}
cout<<a;
return 0;
}