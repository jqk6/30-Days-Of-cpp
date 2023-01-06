#include <iostream>
using namespace std;

int main(){
    int num = 2;
    // float/double & string are not allowed

    switch(num){
        case 1 : cout<<"Case 1"<<endl;
                break;
        case 2 : cout<<"Case 2"<<endl;
                break;
        default : cout<<"default case"<<endl;
    }

return 0;
}