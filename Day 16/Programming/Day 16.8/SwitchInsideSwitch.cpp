#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    char ch = 'a';

    switch (ch)
    {
    case 1:
        cout << "Case 1 of ch" << endl;
        break;
    case 'a': switch (num)
                {
                case 1 : cout<<"The num value is 1"<<endl;
                    break;
                
                case 2 : cout<<"The num value is 2"<<endl;
                    break;
                default:cout<<"The default case of num"<<endl;
                }
                // break;

    default :cout<<"The default case of ch"<<endl;
    }
    //Since we commented the break statement you will get to know what will happen

    return 0;
}