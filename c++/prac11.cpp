 // for printing prime numbers bwt 2 numbers
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int c=a;c<=b;c++){int e=0;
        for(int d=2;d<=sqrt(c);d++){
            if(c%d==0){e=1;}}
          if(e==0){cout<<c<<endl;}  
          
        
    }

}
