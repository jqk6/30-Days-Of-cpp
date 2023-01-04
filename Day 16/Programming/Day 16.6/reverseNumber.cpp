#include <iostream>
using namespace std;

int main(){
    int ans =0;
    int n = 123;
    while(n!=0){
        ans = (ans*10) + (n%10);
        n = n/10;
    }
    cout<<ans<<endl;
return 0;
}