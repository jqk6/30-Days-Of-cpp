#include <iostream>
using namespace std;

//This is function prototype
// int sum(int a,int b); // acceptable
// int sum(int a,b); //not acceptable
int sum(int,int); //acceptable

// void greet(); // acceptable
void greet(void); //acceptable


int main(){
    
    int num1,num2;
    greet();
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the second number : "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters who are passing values to formal parameters
    cout<<"The sum of "<<num1<<" + "<<num2<<" = "<<sum(num1,num2)<<endl;
return 0;
}

int sum(int a, int b){
    // a & b are formal parameters who are taking values from actual parameters num1 & num2.
    int c =  a+b;
    return c;
}


void greet(){
    cout<<"Hello,Good Morning."<<endl;
}
