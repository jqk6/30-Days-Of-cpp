#include <iostream>
using namespace std;

int main(){
    int a ;
    cout<<"Entet the value "<<endl;
    cin>>a;
    int i =2;
    while(i<a){
        if(a%i == 0){
            cout<<"The "<<a<<" number is not prime"<<endl;
            break;
        }
        i++;
    }
    if(i==a){
        cout<<"The "<<a<<" number is prime"<<endl;
    }

return 0;
}