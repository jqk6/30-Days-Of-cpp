#include <iostream>
using namespace std;


void printSeries(int n){
    int a =0;
    int b = 1;
    for(int i = 1; i <=n; i++){
        cout<<a<<" ";
        int c = a+b;
        a = b;
        b = c;
    }
}
int main(){
    
printSeries(5);
return 0;
}
