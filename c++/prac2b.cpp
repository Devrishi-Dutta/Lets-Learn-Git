//hollow rectangle (better code)
#include <iostream>
using namespace std;

int main(){
int row,col;
cout<<"enter";
cin>>row>>col;
for(int a= 1;a<=row;a++){
    for(int b=1;b<=col;b++){
        if(b==1 || b==col){cout<<"*";}
        else if(a==1 || a==row){cout<<"*";}
        else{cout<<" ";}}
        cout<<endl;}
return 0;
}