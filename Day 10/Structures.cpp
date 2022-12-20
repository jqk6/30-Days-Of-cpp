#include <iostream>
using namespace std;

    typedef struct employee
    {
        int eID ;
        float salary;

    }ep;


    int main(){
        
        ep rohan;
        rohan.eID =1;
        rohan.salary = 25000;
        cout<<"The employee ID : "<<rohan.eID<<endl;
        cout<<"The employee salary is : "<<rohan.salary<<endl;
    return 0;
    }