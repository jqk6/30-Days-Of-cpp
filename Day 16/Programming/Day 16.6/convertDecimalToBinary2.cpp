#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your value " << endl;
    int n;
    cin >> n;
    int ans = 0;
    int k =1;
    while (n!=0)
    {
        ans = ((n&1)*k) +ans;
        n = n>>1;
        k = k*10;
    }
    cout<<ans<<endl;
    return 0;
}