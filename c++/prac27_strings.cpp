//form the biggest number from the numeric string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s="053214";
    
    // for(int i=0;i<s.size();i++){
    //     for(int j=i;j<s.size();j++){
    //       if(s[i]<s[j]){ int temp=s[j];
    //                     s[j]=s[i];
    //                     s[i]=temp;}
    // }   cout<<s[i];}

    sort(s.begin(), s.end(), greater<int>());
    cout<<s;
return 0;
}