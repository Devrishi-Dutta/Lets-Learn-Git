//printing number of multiples of 5 &7 till 1000 
#include <iostream>
using namespace std;

int main(){
cout<<"enter";
int a,b,c;
cin>>a>>b>>c;
int c1=a/b;
int c2=a/c;
int c3=a/(c*b);
cout<<c1+c2-c3;
return 0;
}