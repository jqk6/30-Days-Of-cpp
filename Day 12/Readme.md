**Date :** `21-12-2022`
## Lecture - 16 Summary
### Topic : Call by Value & Call by Reference in C++


Let's start by a code example :
```c++
#include <iostream>
using namespace std;
//In this example we will see call by refernece and call by value difference
void swap(int,int); //function prototype

int main(){
    int a =4,b=5;
    cout<<"The value of a "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"The value of a "<<a<<" and the value of b is "<<b<<endl;

return 0;
}
```
Predict the output ? <br>
