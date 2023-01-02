#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "Enter your value" << endl;
    cin >> n;
    while (i <= n)
    {
        // Part 1 of the program
        int num1 = 1;
        while (num1 <= n - i + 1)
        {
            cout << num1 << " ";
            num1++;
        }
        // Part 2 of the program
        int star = 1;
        while (star < i)
        {
            cout << "* * ";
            star++;
        }
        // Part 3 of the program
        int num2 = n - i + 1;
        while (num2 >= 1)
        {
            cout << num2 << " ";
            num2--;
        }
        i++;
        cout << endl;
    }
    return 0;
}
