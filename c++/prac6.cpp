//floyd's triangle
#include <iostream>
using namespace std;

int main(){
int rows;
cout<<"enter";
cin>>rows;
int c=1;//here c must be defined outside the loop since if we define it inside then its value will reset to 1 in every rotation
for(int a=1;a<=rows;a++){
    for(int b=1;b<=a;b++){cout<<c<<" ";c++;}
       
      
    cout<<endl;
}
return 0;
}