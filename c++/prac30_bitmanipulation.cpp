// count the number of ones in binary representation of a number
#include <iostream>
using namespace std;
int numberofones(int n){
   
    int count =0;
    while(n!=0){
        n= (n & (n-1));
        count++;
    }cout<<count<<endl;
}
int main(){
numberofones(19);
return 0;
}