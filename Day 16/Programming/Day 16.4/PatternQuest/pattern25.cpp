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
        int space = 1;
        while (space <= i - 1)
        {
            cout << "  ";
            space++;
        }
        int num = i;
        while (num <= n)
        {
            cout << num << " ";
            num++;
        }
        i++;
        cout << endl;
    }
    return 0;
}
