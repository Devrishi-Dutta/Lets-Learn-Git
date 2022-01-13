//remove all duplicate from a string
// not working god knows why?
#include <iostream>
using namespace std;

void remove(string s){
    if(s.size()==0){return ;}

  if(s[0] != s[1]) { cout<<s[0];
                   remove(s.substr(1));}
  else{ remove(s.substr(1));}
}
int main(){
int i;

remove("aaabbbcddddee");
return 0;
}