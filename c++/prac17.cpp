//sum of each subarray of a give array
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
int sum=0; 
for(int j=0;j<n;j++){
     sum=0; 
    for(int k=j;k<n;k++){
        sum=sum+(arr[k]);
        cout<<sum<<endl;
}
    }
return 0;
}