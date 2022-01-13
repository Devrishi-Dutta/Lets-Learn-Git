#include <iostream>
using namespace std;

int main(){
int n,m;
cout<<"enter";
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
int key;
cin>>key;
int a=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]==key){a=1;
            cout<<i<<" "<<j;}
            
        
    }
}if(a==0){cout<<"key not found";}

return 0;
}