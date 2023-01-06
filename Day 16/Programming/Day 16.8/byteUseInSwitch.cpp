#include <iostream>
using namespace std;

int main(){
    byte b =(byte) 1;

    switch (b)
    {
    case (byte)1: cout<<"Inside case 1"<<endl;
        break;
    
    case (byte)2 :cout<<"Inside case 2"<<endl;
    default:cout<<"Inside default"<<endl;
        break;
    }
return 0;
}   