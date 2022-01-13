//printing fibenacci sequence
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=1,c;
    for(int i=1;i<=n;i++){
       cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
        
    }
}