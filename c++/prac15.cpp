//pascal series
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
    for(int n=1;n<=a;n++){
        for(int r=0;r<=n;r++){
            cout<<fac(n)/(fac(n-r)*fac(r))<<" ";
        } cout<<endl;
    }
}