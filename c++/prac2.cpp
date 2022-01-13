//hollow rectangle
#include <iostream>
using namespace std;

int main(){
    int rows, row,cols;
cout<<"enter"<<endl;
cin>>row >>cols;
rows = row -2;
for (int c=1;c<=cols;c++){cout<<"*";}cout<<endl;
for(int a =1; a<=rows;a++){
    for(int b=1;b<=cols;b++){if(b>1 && b<cols){cout<<" ";}
                                else{cout<<"*";}}
                                cout<<endl;
}for (int c=1;c<=cols;c++){cout<<"*";}
return 0;
}