//using functions for printing prime numbers between 2 numbers
#include<iostream>
#include<cmath>
using namespace std;
bool prime(int num1){
   for(int c=2;c<=sqrt(num1);c++){
       if(num1%c==0){return false;}
    else {return true;}}
}
int main(){
    int a,b;
    cout<<"enter";
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){cout<<i<<endl;}
    }
}