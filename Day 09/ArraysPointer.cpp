#include <iostream>
using namespace std;

int main(){
    int marks[] = {45,55,66,77};
    int* b = marks;
    cout<<"The address inside b pointer is : "<<b<<endl;
    cout<<"The address of array is : "<<marks<<endl;
    cout<<"Value at marks[0] : "<<*b<<endl;
    cout<<"Value at marks[1] : "<<*(b+1)<<endl;
    cout<<"Value at marks[2] : "<<*(b+2)<<endl;
    cout<<"Value at marks[3] : "<<*(b+3)<<endl;

//Same result can be achieved with the help of loop
    for (int i = 0; i < 4; i++)
    {
    cout<<"Value at marks["<<i<<"] : "<<*(b+i)<<endl;
        
    }
     
return 0;
}