// update bit (replace with either 0 or 1 as given by the user)
#include <iostream>
using namespace std;

int updatebit(int n, int pos, int value){
//     if (value==0){
//         int mask= ~(1<<pos);
//         return(n & mask);
//     }
//     else if(value==1){
//         return(n | (1<<pos));
//     }
// }
int mask=~(1<<pos);
n= n& mask;
return(n | (value<<pos));}

int main(){
cout<< updatebit(5,1,1)<<endl;
return 0;
}