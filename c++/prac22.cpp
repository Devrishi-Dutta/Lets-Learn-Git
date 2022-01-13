//product of two matrices
#include <iostream>
using namespace std;

int main(){
int n1,n2,n3;
cout<<"enter n1,n2,n3 ";
cin>>n1>>n2>>n3;
int arr[n1][n2],a[n2][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++){
        cin>>a[i][j];
    }
}
int m[n1][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        m[i][j]=0;
    }
}

for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int b=0;b<n2;b++){
            m[i][j]+=arr[i][b]*a[b][j];
        }
    }
}for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        cout<<m[i][j]<<" ";
    }cout<<endl;
}


return 0;
}