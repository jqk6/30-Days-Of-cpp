#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int num;
    cout << "Enter a number :" << endl;
    cin >> num;
    cout << "The value of fibonacci at " << num << " position is is : " << fib(num) << endl;
    return 0;
}