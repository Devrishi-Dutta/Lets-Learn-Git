//find the first and last occurence of a number in an array
#include <iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key){
    if(i==n){return -1;}
    if(arr[i]==key){return i;}
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
    if (i==-1){return -1;}
    if(arr[i]==key){return i;}
    return lastocc(arr,n,i-1,key);
}

int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,2)<<endl<<lastocc(arr,7,6,2);
    
return 0;
}
