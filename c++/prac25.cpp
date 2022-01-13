//largest word in a sentence
#include <iostream>
using namespace std;

int main(){
int n;
cout<<"enter";
cin>>n;
cin.ignore();
char arr[n+1];

cin.getline(arr,n);
cin.ignore();

int i=0;
int currlen=0, maxlen=0;
while(i<n){
   if( arr[i] == '\0'|| arr[i]==' '){currlen=0;}
   else{currlen++;
   maxlen=max(maxlen,currlen);}
   
   i++;
}cout<<maxlen;

return 0;
}