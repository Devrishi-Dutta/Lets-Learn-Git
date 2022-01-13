//printing max and min value of an arry
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
int max=arr[0],min=arr[0];

for(int a=0;a<n;a++){
    if(arr[a]>=max){max=arr[a];}
    if(arr[a]<=min){min=arr[a];}
}
    cout<<max<<" "<<min;
return 0;
}