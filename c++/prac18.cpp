// longest arithmetic subarray in a given array
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
int arr[n];
for(int a=0;a<n;a++){
    cin>>arr[a];
}
int diff=arr[0]-arr[1];
int ans=2;
int j=2;
int curr=0;
for(int i=0;i<n;i++){
    curr=diff;
    diff=arr[i]-arr[i+1];
    if(curr==diff){j++;}
    else {
        ans=max(ans,j);
        j=2;}
   
}cout<<ans;
return 0;
}