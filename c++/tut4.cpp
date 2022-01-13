//manipulators in c++(setw and endl)
#include<iostream>
#include<iomanip>//for using setw
using namespace std;
int main(){
    int a=4, b=46, c=7654;
    cout<<"the value of a is: "<<setw(4)<<a<<endl;
    cout<<"the value of b is: "<<setw(4)<<b<<endl;
    cout<<"the value of c is: "<<setw(4)<<c<<endl;
}