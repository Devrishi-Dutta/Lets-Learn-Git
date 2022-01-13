//printing numbers till n using recursion
#include <iostream>
using namespace std;
int dec(int n){
    if(n==0){return 0;}  // in case of void return; would have written
   
    cout<<n<<" ";
    dec(n-1);
}

int asc(int n){
    if(n==0){return 0;}
    asc(n-1);
    cout<<n<<" ";
}


int main(){
int n;
cout<<"enter";
cin>>n;
dec(n);
cout<<endl;
asc(n);
return 0;
}
