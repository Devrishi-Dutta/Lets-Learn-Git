//half pyramid
#include <iostream>
using namespace std;

int main(){
    int rows;
    cout<<"enter";
cin>>rows;
// for(int a=1;a<=rows;a++){
//     for(int b=1;b<=(rows-a+1);b++){cout<<"*";}
//     cout<<endl;
    for(int a=rows;a>=1;a--){
        for(int b=1;b<=a;b++){cout<<"*";}
        cout<<endl;
    
    
    
}
return 0;
}