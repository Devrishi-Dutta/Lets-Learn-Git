//for declaring prime number
#include<iostream>
#include<cmath>// for squareroot of n
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
int a=0;
for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
       cout<<"it is not prime";
        a=1; break;}// break must be written at last 
    }
    if(a==0){cout<<"prime";}
return 0;
}