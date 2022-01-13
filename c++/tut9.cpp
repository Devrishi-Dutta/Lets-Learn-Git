//using arrays
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int a=0;a<n;a++){
    cout<<arr[a]<<" ";
}
return 0;
}