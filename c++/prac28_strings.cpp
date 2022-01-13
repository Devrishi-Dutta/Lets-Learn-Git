//maximun frequency of a character in a string
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string str="asjababacdzz";
    char curr='a';
    int lar=0;
    char ans='a';
    for(int i=1;i<=26;i++){
         int count =0;
        for(int j=0;j<str.size();j++){
            if(str[j]==curr){count++;}
        }if(lar<count){ans=curr;}
        lar=max(lar,count);
        curr++;
    }cout<<lar<<" "<<ans<<endl;
return 0;
}