#include <iostream>
using namespace std;

// set bit means 1 in binary

int setBit(int n){
    int count=0;
    while(n != 0){
        if(n&1){
            count++;
        }
        n= n>>1;
    }
    return count;
}
int main(){
    
    int a = 2; //10
    int b = 15; //1111
    int bits = setBit(a)+setBit(b);
    cout<<bits<<endl;

return 0;
}
