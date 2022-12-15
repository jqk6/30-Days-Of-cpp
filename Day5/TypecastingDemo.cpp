#include <iostream>
using namespace std;

int main()
{

    int a = 45;
    float b = 55.67;
    cout << "The value of a is : " << (double)a << endl;
    cout << "The value of a is : " << double(a) << endl; // Same as above line

    cout << "The value of b is : " << (int)b << endl;
    cout << "The value of b is : " << int(b) << endl; // Same as above line

    int c = (int)b;

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + (int)b << endl;
    cout << "The expression is " << a + int(b) << endl;

    return 0;
}