//printing max term till each term of an array
#include <iostream>
#include<climits>
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
int arr[n];
for(int a=0;a<n;a++){
    cin>>arr[a];
}

int max=arr[0];

for(int a=0;a<n;a++){
    if(arr[a]>=max){max=arr[a];}
cout<<max;}
    

}