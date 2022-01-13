//printing rectangle using rows and column from user 
#include <iostream>
using namespace std;

int main(){
int row,col;
cout<<"enter no. of rows & col."<<endl;
cin>>row>>col;
for(int a=1;a<=row;a++)
{for(int b=1;b<=col;b++){cout<<"*";}
cout<<endl;}
return 0;
}