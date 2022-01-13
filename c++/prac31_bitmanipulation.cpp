//write a program to generate all subsets of a set
#include<iostream>
using namespace std;
 void subsets(int arr[], int n){
     for(int i=0;i<(1<<n);i++){    // i here will start from 0 and end at (2^n-1)
         for(int j=0;j<n;j++){
             if((i & (1<<j))!=0){cout<<arr[j]<<" ";} ////// here 1 & !=0 are different things
         }cout<<endl;
     }
 }

int main(){
int arr[4]={1,2,3,4};
subsets(arr,4);
return 0;
}