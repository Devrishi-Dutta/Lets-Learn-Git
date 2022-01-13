//check if an array is sorted or not
// using loop
#include <iostream>
using namespace std;

int main(){
cout<<"enter";
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int a=0;
int b=0;

for(int j=0;j<n-1;j++){
    if(arr[j]>arr[j+1]){a=1;}
    else if(arr[j]<arr[j+1]){b=1;}
    
}if(a==1 && b==1){cout<<"not sorted";}
else if(a==0){cout<<"sorted & ascending";}
else if(b==0){cout<<"sorted & decending";}
return 0;
}

