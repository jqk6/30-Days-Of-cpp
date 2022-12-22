

**Date :** `22-12-2022`
## Lecture - 17 Summary
### Topic : Inline Functions, Default Arguments & Constant Arguments in C++


[Inline functions](https://www.geeksforgeeks.org/inline-functions-cpp/), this article is more than enough to explain and understand the use of **inline functoin**.

**When should we use inline functions ?**<br>
>When the work done by function is very small and the line of code is very small, then using inline function is a better choice.

Also even if we try to make a inline function with many lines of code in it , it will depend on compiler if he will accept it or not the compiler do optimization from its own side too.
<br><br>
**Default arguments :**
Lets understand this concept with the help of an example:<br>
```c++
#include <iostream>
using namespace std;


float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney * factor;
}
int main(){
   int a ,b;
   int money = 10000; 
cout<<"If you have "<<money<<"Rs in your bank account , you will receive "<<moneyReceived(money)<<"Rs after 1 year"<<endl;

cout<<"For VIP: If you have "<<money<<"Rs you will receive "<<moneyReceived(money,1.10)<<"Rs after 1 year"<<endl;

return 0;
}
```
A default argument is a value provided in a function declaration that is automatically assigned by the compiler if the calling function doesn’t provide a value for the argument. In case any value is passed, the default value is overridden.

>Note : Always write default arguments after compulsory arguments.Like above example 'currentMoney' is compulsory to pass while factor is optional
```c++
float moneyReceived(float factor=1.04,int currentMoney){
    return currentMoney * factor;
}
```
This will throw error.<br>
Always write default arguments in the last in formal arguments list of a function.
<br><br>
**Constant arguments :**<br>
A constant argument is the one whose modification cannot take place by the function. Furthermore, in order to make an argument constant to a function, the use of a keyword **_const_** can take place like- **int sum (const int a, const int b)**.


<br>
<hr>



📑[All in one file](https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/main/Journey_so_far.md)📍
