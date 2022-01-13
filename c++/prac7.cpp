//butterfly
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
for(int a=1;a<=(2*n);a++){
    for(int b=1;b<=(2*n);b++){
        if (a<=n && b<=a){cout<<"* ";}
        else if (a<=n && b>(2*n-a)){cout<<"* ";}

        else if (a>n && b>(a-1)){cout<<"* ";}
        else if (a>n && b<=(2*n-a+1)){cout<<"* ";}
        else {cout<<"  ";}
    } cout<<endl;
}

return 0;
}