//searching key in sorted array
// not working
#include <iostream>
using namespace std;

int main(){
int n,m;
cout<<"enter";
cin>>n>>m;
int key;
cin>>key;

int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}

int s=0,e=m-1;
bool ans=false;
while(s<n and e>=0){
    if(arr[s][e]==key){ans=true;cout<<"element found";break;}//here break must be used because e & s are only upgrading if condition is matched
                                                             //else it is becoming an infinite loop
    else if(arr[s][e]>key){e--;}
    else{s++;}
}

if(ans==false){cout<<"element missing";}

return 0;
}