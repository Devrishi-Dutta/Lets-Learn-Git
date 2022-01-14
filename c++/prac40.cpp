// semi prime number
#include <iostream>
using namespace std;

int main(){
cout<<"enter";
int n;
cin>>n;
int count =0;
for(int i=2;i<n;i++){
    int a=0;
    
    for(int j=2;j<i;j++){
        if(i%j==0){a=1;}
        
    }if(a==0){count++;}
} 
int arr[count];
int b=0;
for(int i=2;i<n;i++){
    int a=0;
    
    for(int j=2;j<i;j++){
        if(i%j==0){a=1;}
        
    }if(a==0){arr[b]=i;
                b++;}
} 

int p=0;
for(int c=0;c<count;c++){
    for(int d=c;d<count;d++){
        if(n==(arr[c]*arr[d])){cout<<"it is semi prime";p=1;
                               break;}
    }
} if(p==0){cout<<"it is not semi prime";}
return 0;
}