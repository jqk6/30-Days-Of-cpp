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
    int num;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    cout <<"The value of factorial"<< num<<" is : "<< calulateaFactorial(num) << endl;
    return 0;
}