//transpose of a square matrix
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
int arr[n][n];
for(int a=0;a<n;a++){
    for(int b=0;b<n;b++){
        cin>>arr[a][b];
    }
}
for(int a=0;a<n;a++){
    for(int b=0;b<n;b++){
       cout<<arr[b][a]<<" ";
    }cout<<endl;
}

return 0;
}