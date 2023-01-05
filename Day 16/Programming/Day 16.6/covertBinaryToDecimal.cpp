#include <iostream>
using namespace std;

int main()
{
    int n = 101101;
    int k = 1;
    int ans = 0;
    while(n!=0){
        ans =(k*(n%10)) +ans;
        n /=10;
        k = k*2;
    }
    cout<<ans<<endl;

// Below code works the same

/*     k = 1;
    while (n != 0)
    {
        ans = (k * (n % 10)) + ans;
        n /= 10;
        k = k << 1;
    }
    cout<<ans<<endl;
 */    
return 0;
}