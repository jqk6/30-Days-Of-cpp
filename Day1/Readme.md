## Lect-1 & Lect-2 Summary
Founder of c++ is Bjarne Stroustrup in ,1979<br>
### C++ features
- High performance
- More control on system resources , on the other hand if we try to do same thing in java or python then 
there will be a intermediate to communicate to the hardware which is why c++ is faster.
- Memory management

### C++ major updates
- 2011 -> C++11
- 2014 -> C++14
- 2017 -> C++17

#### First Program
```c++
#include<iostream>
int main(){
    std::cout<<"Hello world\n";
    return 0;
}
```

Here `#include` work as a import keyword to include header files in our code.

`<iostream>` is a header file name, eveything inside angle brackets are known as header file.

Header files provide us various functonalities and each header file have some purpose in the code.

Like `<iostream>` provide input output functionalities for us.



`int` is a integer , here int work as a return type for a function . 

`main()` is a function , which is a entry point for every program and here main() function will return 0
because as you can see in the above code sample main() function return type is int.

`()` tells the compiler that the given identifier is a function. Every function ends with parenthesis `()` 

And in these parenthesis we can also declare parameters that will be used while calling a function or we can left it empty just like in main() function.
 >The values that are declared within a function when the function is called are known as an argument. Whereas, the variables that are defined when the function is declared are known as a parameter.
 

`std::cout` is function inside std .We can also use `cout` but for that on the second line out of the main function 
we need to add a extra line i.e `using namespace std`

`<<` these angle brackets in C++ are called **insertion operator** .
```c++
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world\n";
    return 0;
}
```
`::` this symbol is called space resolution operator.
