#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Entet the value " << endl;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "The " << n << " number is not prime" << endl;
            break;
        }
        i++;
    }
    if (i == n)
    {
        cout << "The " << n << " number is prime" << endl;
    }

    // Another approach to solve this problem
    // You can take a bool and set it by default true
    bool flag = true;

    int j = 2;
    while (j < n)
    {
        if (n % j == 0)
        {
            flag = false;
            break;
        }
        j++;
    }
    if (flag == true)
    {
        cout << "The " << n << " number is prime" << endl;
    }
    else
    {
        cout << "The " << n << " number is not prime" << endl;
    }

    return 0;
}