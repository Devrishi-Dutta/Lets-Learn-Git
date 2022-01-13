//half pyramid using numbers
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter";
    cin>>rows;
    for(int a=1;a<=rows;a++){
        for(int b=1;b<=a;b++){cout<<a;}
        cout<<endl;
    }

}