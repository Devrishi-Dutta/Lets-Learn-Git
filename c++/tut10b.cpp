#include <iostream>
#include<climits>//for using INT_MIN &_MAX
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxNo=INT_MIN,minNo=INT_MAX;//using INT_MAX &INT_MIN

for(int a=0;a<n;a++){
    maxNo=max(maxNo,arr[a]);
    minNo=min(minNo,arr[a]);
}
    cout<<maxNo<<" "<<minNo;
return 0;
}