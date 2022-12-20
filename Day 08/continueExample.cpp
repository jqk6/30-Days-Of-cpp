#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout <<"The value of i is : "<< i << endl;
    }

    return 0;
}