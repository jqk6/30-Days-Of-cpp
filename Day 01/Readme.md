**Date :** `10-12-2022`
## Lecture - 1 & 2 Summary
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
    std::cout<<"Hello world"<<endl;
    return 0;
}
```

Here `#include` work as a import keyword to include header files in our code.

The `#include` is called a **preprocessor directive**. Preprocessor directives begin with a `#` sign. They are processed before compilation. The directive `#include <iostream>` tells the preprocessor to include the "iostream" header file to support input/output operations.

`<iostream>` is a header file name, eveything inside angle brackets are known as header file.

Header files provide us various functonalities and each header file have some purpose in the code.

Like `<iostream>` provide input output functionalities for us.

The `using namespace std;` statement declares std as the default namespace used in this program. The names `cout` and `endl`, which is used in this program, belong to the `std namespace`. These two lines shall be present in all our programs.



`int` is a integer , here int work as a return type for a function . 

`main()` is a function , which is a entry point for every program and here main() function will return 0
because as you can see in the above code sample main() function return type is int.

`()` tells the compiler that the given identifier is a function. Every function ends with parenthesis `()` 

And in these parenthesis we can also declare parameters that will be used while calling a function or we can left it empty just like in main() function.
 >The values that are declared within a function when the function is called are known as an argument. Whereas, the variables that are defined when the function is declared are known as a parameter.
 

`std::cout` is function inside std .We can also use `cout` but for that on the second line out of the main function 
we need to add a extra line i.e `using namespace std`

`<<` these angle brackets in C++ are called **insertion operator** .

`cout` refers to the standard output (or Console OUTput). The symbol `<<` is called the stream insertion operator (or put-to operator), which is used to put the string "Hello world" to the console. "endl" denotes the END-of-Line or newline, which is put to the console to bring the cursor to the beginning of the next line.

`return 0;`
terminates the main() function and returns a value of 0 to the operating system. Typically, return value of 0 signals normal termination; whereas value of non-zero (usually 1) signals abnormal termination. This line is optional. C++ compiler will implicitly insert a "return 0;" to the end of the main() function.

```c++
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world"<<endl;
    return 0;
}
```
`::` this symbol is called space resolution operator.


>**Preprocessor Directive :** The `#include` (Line 1) is a preprocessor directive and NOT a programming statement. A preprocessor directive begins with hash sign (#). It is processed before compiling the program. A preprocessor directive is NOT terminated by a semicolon - _take note of this unusual rule_.

<hr>

[📍One interesting question on Stack Overflow](https://stackoverflow.com/questions/18914106/what-is-the-use-of-using-namespace-std?lq=1)

📑[All in one file](https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/main/Journey_so_far.md)📍
