#include <iostream>
using namespace std;

union quantity
{
    int apple;
    int mango;
    char favChar;
};

int main(){

  union quantity q1;
  q1.apple = 10;
  q1.mango = 20;
  
  cout<<"The quantity of apples is : "<<q1.apple<<endl;  

  //One interesting thing
  q1.favChar ='c';
  cout<<"The quantity of mango is : "<<q1.mango<<endl;  

  cout<<"The value of favChar is : "<<q1.favChar<<endl;  
  
return 0;
}