//checking palindrom words eg. NITIN
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter length";
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-i-1]){flag=false;}
        else{flag=true;}
    }if(flag==false){cout<<"it is palindrom";}
    else{cout<<"not palindrom";}
return 0;
} 