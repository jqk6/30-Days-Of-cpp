#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 2;
    char operation = '/';
    switch (operation)
    {
    case '+':cout<<(a+b)<<endl;
        break;
    case '-':cout<<(a-b)<<endl;
        break;
    case '*':cout<<(a*b)<<endl;
        break;
    case '/':cout<<(a/b)<<endl;
        break;
    default:cout<<"No operation is given"<<endl;
        break;
    }

return 0;
}
