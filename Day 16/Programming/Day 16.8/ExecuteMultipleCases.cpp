#include <iostream>
using namespace std;

int main(){
    int num1 = 1;
    int num2 = 2;

    if(num1 == 1 || num2 == 2){
        cout<<"Hello World"<<endl;
    }

    //How you will write the above code in switch ?

    switch (num1)
    {
    case 1:
         case 2 : cout<<"Hello World"<<endl;

    
   /*  default:
        break; */ 
    // default is not mandatory
    }
 
return 0;
}
