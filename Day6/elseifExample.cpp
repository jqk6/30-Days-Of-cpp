#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;
    if(age<18){
        cout<<"You are not eligible for intership."<<endl;
    }else if(age>= 18 && age<= 23){
        cout<<"You are eligible for intership."<<endl; 
    }else{
        cout<<"Try for full time employement, you are a graduate"<<endl;
    }
    return 0;
}
