// using transform function
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="agfed";

    transform(s.begin() , s.end() , s.begin() , :: toupper);
    cout<<s;
return 0;
}