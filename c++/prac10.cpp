// checking whether a given number is armstrong or not
// 153 is an armstrong number as 1+125+27=153
#include <iostream>
using namespace std;

int main(){
cout<<"enter";
int n1;
cin>>n1;
int n=n1;
int a=0;
while(n>0){     // here while loop is more suitable than for loop as the loop is more based on the input number
    int b=n%10;
    a=a+(b*b*b);
    n=n/10;}
    if(a==n1){cout<<"it is armstrong";}
    else{cout<<"it is not armstrong";}
// }if (a==n){cout<<"it is armstrong";}
// else{cout<<"it is not armstrong";}
return 0;
}