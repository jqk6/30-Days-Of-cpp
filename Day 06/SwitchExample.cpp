#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age " << endl;
    cin >> age;
    // Selection control structure : Switch case statements
    switch (age)
    {
    case 18:
        cout << "You are eligible for intership." << endl;
        break;
    case 23:
        cout << "You can try for full time." << endl;
        break;
    default:
        cout << "No spcial case" << endl;
        break;
    }
    return 0;
}