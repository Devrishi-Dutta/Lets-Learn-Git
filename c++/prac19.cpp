//record breaking day
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
int arr[n+1];//take an extra element in the array and give it -1 value so that you don't need extra condition for the arr[n-1]element
arr[n]=-1;
for(int a=0;a<n;a++){
    cin>>arr[a];
}
int mx = -1;
int ans =0;
for(int i=0;i<n;i++){
    if(mx<arr[i] && arr[i]>arr[i+1]){
        ans++;
    }mx=max(mx,arr[i]);
}cout<<ans<<endl;}
