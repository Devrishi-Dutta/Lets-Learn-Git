//factorial of a number
#include<iostream>
using namespace std;
int fac(int a){
    int factorial=1;
    for(int i=1;i<=(a);i++){
        factorial=factorial*i;
    }return factorial;
}
int main(){
    int a;
    cout<<"enter"<<endl;
    cin>>a;
    cout<<fac(a);

}