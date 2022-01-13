// check if an array is sorted or not
//using recursion
#include <iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){return true;}
    bool restArray= sorted(arr+1,n-1);  // arr+1 means arr[1] will become arr[0]and arr[0] will be ignored
 return (arr[0]<=arr[1] && restArray);
}
int main(){
cout<<"enter";
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout << sorted(arr, n);
return 0;
}