#include <iostream>
using namespace std;

int main(){

cout<<"The size of 34.5f is : "<<sizeof(34.5f)<<endl;
cout<<"The size of 34.5F is : "<<sizeof(34.5F)<<endl;
cout<<"The size of 34.5l is : "<<sizeof(34.5l)<<endl;
cout<<"The size of 34.5L is : "<<sizeof(34.5L)<<endl;
cout<<"The size of 34 is : "<<sizeof(34l)<<endl;//Long
cout<<"The size of 34 is : "<<sizeof(34)<<endl;//Integer
return 0;
}