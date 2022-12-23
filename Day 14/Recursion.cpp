#include <iostream>
using namespace std;

int calulateaFactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * calulateaFactorial(n - 1);
}

int main()
{

    cout <<"The value of 5 factorial is : "<< calulateaFactorial(5) << endl;
    return 0;
}