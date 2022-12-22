#include <iostream>
using namespace std;
// In this example we will see swaping values with the help reference variables
void swapPointer(int &, int &); // function prototype

int main()
{
    int a = 4, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swapPointer(a, b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}

void swapPointer(int &num1, int &num2)
{                    // temp   num1    num2
    int temp = num1; // 4      4        5
    num1 = num2;     // 4      5        5
    num2 = temp;     // 4      5        4
}