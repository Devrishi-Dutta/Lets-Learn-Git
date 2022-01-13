//printing nCr(proper need of function)
#include<iostream>
using namespace std;
int fac(int a){
    int factorial=1;
    for(int i=1;i<=(a);i++){
        factorial=factorial*i;
    }return factorial;
}
int main(){
    int n,r;
    cout<<"enter"<<endl;
    cin>>n>>r;
    cout<<fac(n)/(fac(r)*fac(n-r));
}