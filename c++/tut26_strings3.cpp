// sorting of string
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s="wxuyxoacb";

    sort(s.begin(), s.end());
    cout<< s<<endl;
return 0;
}