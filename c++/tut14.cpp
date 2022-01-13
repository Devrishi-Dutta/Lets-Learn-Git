//bubble sorting of arrays
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
for(int a=1;a<n;a++){
    for(int b=0;b<n-a;b++){
        if(arr[b]>arr[b+1]){
            int t=arr[b+1];
            arr[b+1]=arr[b];
            arr[b]=t;}
    }
}
for(int c=0;c<n;c++){cout<<arr[c]<<" ";}
return 0;
}