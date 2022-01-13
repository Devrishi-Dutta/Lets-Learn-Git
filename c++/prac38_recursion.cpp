// replace pi 3.14 in string
#include <iostream>
#include<string>
using namespace std;

int main(){
cout<<"enter";
string str;
cin>>str;
string s1="pi";
for(int i=0;i<(str.size()-1);i++){
    string s2= str.substr(i,2);
    if(s2==s1){str.erase(i,2);
                str.insert(i,"3.14");}


}cout<<str;
return 0;
}