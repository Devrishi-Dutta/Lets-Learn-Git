#include<iostream>
using namespace std;
int glo = 5;//global variable
void sum(){
    cout<<glo<<endl;
}

int main(){
    glo = 20;//local variable
    sum();
    cout <<glo<<endl;
}