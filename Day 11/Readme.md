**Date :** `20-12-2022`
## Lecture - 15 Summary
### Topic : Functions & Function Prototypes in C++
The idea is to put some commonly or repeatedly done tasks together and make a function so that instead of writing the same code again and again for different inputs .<br>
And every program starts from `main()` function and only after that other functions call can start. 


```c++
#include <iostream>
 using namespace std;

int sum(int a, int b){
    int c =  a+b;
    return c;
}
int main(){
    
    int num1,num2;
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the second number : "<<endl;
    cin>>num2;
    cout<<"The sum of "<<num1<<" + "<<num2<<" = "<<sum(num1,num2)<<endl;
return 0;
}
```
Now what if we define the sum function after main() function ?
```c++
#include <iostream>
using namespace std;




int main(){
    
    int num1,num2;
    cout<<"Enter the first number : "<<endl;
    cin>>num1;
    cout<<"Enter the second number : "<<endl;
    cin>>num2;
    cout<<"The sum of "<<num1<<" + "<<num2<<" = "<<sum(num1,num2)<<endl;
return 0;
}

int sum(int a, int b){
    int c =  a+b;
    return c;
}
```
**Will it work ?**

<p align ="center">
<img src = "/media/gifs/thinking.gif" width = "400" height ="350">
</p>
<hr>


📑[All in one file](https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/main/Journey_so_far.md)📍
