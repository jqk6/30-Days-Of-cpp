#include <iostream>
using namespace std;

int main(){
    int marks[] = {45,55,66,77};
    int* b = marks;
    cout<<"The address inside b pointer is : "<<b<<endl;
    cout<<"The address of array is : "<<marks<<endl;
    cout<<"Value at mark[0] : "<<*b<<endl;
    cout<<"Value at mark[1] : "<<*(b+1)<<endl;
    cout<<"Value at mark[2] : "<<*(b+2)<<endl;
    cout<<"Value at mark[3] : "<<*(b+3)<<endl;
     
return 0;
}