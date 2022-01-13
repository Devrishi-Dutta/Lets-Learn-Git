// using functions to print fibenacci sequence
#include<iostream>
using namespace std;
int fib(int a){
    int b=0,c=1,d;
    for(int e=1;e<=a;e++){
        cout<<b<<endl;
        d=b+c;
        b=c;c=d;
    }

}
int main(){
    int n;
    cin>>n;
    fib(n);
    }

