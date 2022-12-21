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
<br>
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
<img src = "/media/gifs/thinking.gif" width = "500" height ="300">
</p>

**Output :** <br>

```
Functions.cpp: In function ‘int main()’:
Functions.cpp:14:52: error: ‘sum’ was not declared in this scope
   14 |     cout<<"The sum of "<<num1<<" + "<<num2<<" = "<<sum(num1,num2)<<endl;
      |     
```

>The answer is NO, IT WILL NOT WORK🙅‍♂️. Same thing will happen in Structures,enums,union too.<br>
>If we define all of the functions, structure, enum, union after `main()` function body, it will not work.

<p align ="center">
<img src = "/media/gifs/ahh..I see.gif" width = "350" height ="250">
</p>

<br><br>
Sometimes you may want to define your functions after `main()` fucnction, so what's the solution ?
>The answer is **Function prototypes** 🤠
<br>

**What is function prototypes ? 🤔**
>The function prototypes are used to tell the compiler about the number of arguments and about the required datatypes of a function parameter, it also tells about the return type of the function. By this information, the compiler cross-checks the function signatures before calling it.
>>After this feature rolled out in C++ later on the C language also implemented this feature inspired from C++. 


**Syntax :**<br>
`type function-name(arguments)`

**Code :**<br>
```c++
int sum(int,int); //acceptable



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

Syntax acceptable by Function prototypes :<br>
```c++
//Taking example of above code

 int sum(int a,int b);  //--> acceptable
 int sum(int a,b);      //-->not acceptable
 int sum(int,int);      //--> acceptable
```

**Formal parameters V/s Actual parameters ?**<br>
>Formal parameters are those which we made in the functions e.g `int sum(int a, int b)`  'a'  &  'b' are formal parameters.<br>
>The values which we pass to these formal parameters e.g. `sum(4,5)` are called actual parameters.

<br>
<hr>



📑[All in one file](https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/main/Journey_so_far.md)📍
