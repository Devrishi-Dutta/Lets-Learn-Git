// clear bit (replacing 1 with 0 at agiven position for a g iven number)
#include <iostream>
using namespace std;
int clearbit(int n , int pos){
    int mask= ~(1<<pos);
    return(n & mask);
}
int main(){
    cout<<clearbit(5,2)<<endl;
return 0;
}