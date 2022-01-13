// better version of tut5.cpp 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 3 numbers:";
    cin>>a>>b>>c;
    cout<<"the largest number is:";
    if(a>b&&a>c){cout<<a;}
    else if(b>c&&b>a){cout<<b;}
    else{cout<<c;}
}