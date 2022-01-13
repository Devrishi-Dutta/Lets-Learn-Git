//sorting of arrays
#include <iostream>
using namespace std;
int sort(int arr[],int n){
    for(int i=0;i<(n-1);i++){
        for(int j=i+1 ;j<n;j++){
            if(arr[i]>arr[j]){
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;}
        }
    }
    for(int a=0;a<n;a++)
    cout<<arr[a]<<" ";}

int main(){
int n;
cout<<"eter";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,n);
return 0;
}