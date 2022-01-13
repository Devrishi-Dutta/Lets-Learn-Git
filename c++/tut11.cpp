// searching in arry list; O(n)
#include <iostream>
using namespace std;
int search(int arr[] ,int n , int key){
    for(int c=0;c<n;c++){
        if(arr[c]==key){return arr[c];}
    }return -1;
}
int main(){
int n;
cout<<"enter"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
cout<<search(arr,n,key);
return 0;
}