//converting given string complete uppercase or lowercase
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str="asfefy";
   // cout<<'a'-'A'<<endl;  // for finding difference btw uppercase and lowercase

   // for uppercase
   for(int i=0;i<str.size();i++){
       if(str[i]>='a' && str[i]<='z'){str[i]-=32;}
       cout<<str[i];
   }
return 0;
}