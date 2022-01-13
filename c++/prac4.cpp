///half pyramid after 180degree rotation
#include <iostream>
using namespace std;

int main(){
int rows;
cout <<"enter";
cin>>rows;
for(int a=1;a<=rows;a++){
    for(int b=1;b<=rows;b++){
        if(b<(rows-a)){
            cout<<"  ";}
            else {cout<<"* ";}
            
        }cout<<endl;
}
return 0;
}