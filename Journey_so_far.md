# 💭10 minutes a day keep procastination away💯

# Index
<ul>
    <li><a href="#day-1">Day 1</a></li>
    <li><a href="#day-2">Day 2 </a> </li>
    <li><a href="#day-3">Day 3 </a> </li>
    <li><a href="#day-4">Day 4 </a> </li>
    <li><a href="#day-5">Day 5 </a> </li>
    <li><a href="#day-6">Day 6 </a> </li>
    <li><a href="#day-7">Day 7 </a> </li>
    <li><a href="#day-8">Day 8 </a> </li>
    <li><a href="#day-9">Day 9 </a> </li>
    <li><a href="#day-10">Day 10 </a> </li>
    <li><a href="#day-11">Day 11 </a> </li>
    <li><a href="#day-12">Day 12 </a> </li>
    <li><a href="#day-13">Day 13 </a> </li>
    <li><a href="#day-14">Day 14 </a> </li>
    <li><a href="#day-15">Day 15 </a> </li>
    <li><a href="#16"</a>Day 16
        <ul>
            <li> <a href="#16.1">Day 16.1</a></li>
            <li> <a href="#16.2">Day 16.2</a></li>
        </ul>    
    </li>
    
</ul>      
<!--     <li><a href="#day-17">Day 17 </a> </li> --> 
<!--     <li><a href="#day-18">Day 18</a> </li> -->
    
 

# Day 1
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


[📍One interesting question on Stack Overflow](https://stackoverflow.com/questions/18914106/what-is-the-use-of-using-namespace-std?lq=1)

<div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<hr>
<!-- ================================================================================================================================================ -->

# Day 2
**Date :** `11-12-2022`
## Lecture - 3 Summary
### Topic - Variables & Comments
Variables are just containers which help us to store data.

Comments `//` is a way of coveying message to the compiler that you don't need to compile this part of line.

`//` is used as single line comment. For mutiple line comments we use `/**/` everything written between these two asterisk will not be compiled by the compiler.
<hr>

## Lecture - 4 Summmary
### Topic - Variables Scope and Data Types
Variables can be of different types. Primarily we have these variable types in C++:
- byte
- short
- int
- float
- char
- double
- bool

#### Syntax for declaring variables in C++
>Data_type Variable_name = Value;

int a =4;

##### Based on scope variables can be classified into two types:
1. Local Variable
2. Global Variable

**Variable scope** : Scope of a variable is a region in code where the existence of variable is valid.
  
  **Local Variables** : Local variables are declared inside the braces of any function and can be accessed only from there.<br>
  **Global Variables** : Global variables are declared outside any function and can be accessed from anywhere.

### Data types in C++ are categorised in three groups:
  - Bult-in
  - User-defined
  - Derived

#### Built-in Data types in C++:
`int`  `float`  `char`  `double`  `bool`


#### User-defined Data types in C++:
`Struct`  `Union`  `Enum`


#### Derived Data types in C++:
`Array`  `Function`  `Pointer`

📍[Codes of Day 2](/Day%2002) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 3
**Date :** `12-12-2022`
## Lecture - 5 Summary
### Topic : Basic I/O in C++

In C++ sequence of bytes corresponding to input and  output are commonly known as **streams**.

**Input Stream** : Direction of flow of bytes takes place from input device (e.g. Keyboard) to the main memory.<br>
**Output Stream** : Direction of flow of bytes takes place from main memory to the output device (e.g. Display)

**Insertion Operator** `<<`: Whatever output is generated show it to the screen that's the role of insertion operator.<br> 
**Extraction Operator** `>>`: Whatever input is given take it, that's the role of extraction operator.

![](Day%2003/ReserveKeywords_C%2B%2B.png)


![](Day%2003/DataType_Range_C++.png)


📍[Codes of Day 3](/Day%2003) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 4
**Date :** `13-12-2022`
## Lecture - 6 Summary
### Topic : C++ header files & operators in C++

There are two types of header files:
1. System header files : It comes with the compiler.
2. User defined header files : It is written by the programmer.<br>
   Syntax of user defined header files<br>
   `include "this.h";`<br>
   `h` is the extension of header files .
   
   One thing need to be insured that any user defined files that is used by program must be defined in the current working directory.

[C++ reference webiste](https://en.cppreference.com/w/cpp/header)

I already know types of operators because of Java , so I will not include the repetitive stuff.
<div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 5

**Date :** `14-12-2022`
## Lecture - 7 Summary
### Topic : Reference Variables & Typecasting

By default the scope of each variable is local , to call the global variable we use `::` scope resolution operator .<br>
By default decimal literal _( e.g. 3.45 )_ is `double` to let the compiler know that given number is float we use `f or F` suffix _( e.g. 3.45f )_.<br>
Same goes with `long` .
```c++
float = 3.45f;
long double = 3.45l; //This is long double, this doesn't exist in java.
```
To know the size of a datatype we use `sizeof()` keyword , enter the value in parenthesis which you want to check.<br>
>Note: The size of a datatype differs compiler to compiler.

**Reference Variable** : In short words , we can say a man with multiple names but all those names belong to single person and when we call with any name that is related to that person ,that person will respond to the call .

**Code:**
```c++
int main(){

    int a =45;
    int &b = a;

    cout<<"Output of a : "<<a<<endl;
    cout<<"Output of b : "<<b<<endl;
    b = 50;
    cout<<"Output of a : "<<a<<endl;

    return 0; 
}
```
**Output:**
```
Output of a : 45
Output of b : 45
Output of a : 50
```

**TypeCasting** : The term is enough to explain it concept. In simple words, the process of converting one datatype into another datatype manually.<br>
```c++
float b = 55.67;
int c = (int)b;
```

📍[Codes of Day 5](/Day%2005) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>

# Day 6
<!-- ================================================================================================================================================ -->

**Date :** `15-12-2022`
## Lecture - 8 & 9 Summary

### Lecture - 8 Topic : Constants, Manipulators & Operator Precedence

**Constant** : Constant is helpful when you don't want to let other change your variable value.<br>

```c++
int a =45;
cout<<"The value of a : <<a<<endl;
a =55;
cout<<"The value of a : <<a<<endl;
```
As you can see in the above example the value can be changed easily, to stop that we use constant.

```c++
const int a =45;
cout<<"The value of a : " << a <<endl;
a =43; //This will throw error because we cannot change the value of 'a' here because now 'a' is constant 
```

**Manipulators** : Manipulators in C++ are those operators which help us to format (display format on the screen) our code .<br>
Commonly used two manipulators : `endl` `setw()`<br>
>`setw()` comes from `iomanip` 

Code:
```c++
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int w = 1, x = 22, y = 333, z = 4444;
    cout << "The value of w is :" << setw(4) << w << endl;
    cout << "The value of x is :" << setw(4) << x << endl;
    cout << "The value of y is :" << setw(4) << y << endl;
    cout << "The value of z is :" << setw(4) << z << endl;
    return 0;
}
```

Output:
```
The value of w is :   1
The value of x is :  22
The value of y is : 333
The value of z is :4444
```

Operator precedence is easily available on internet.

<hr>
<!-- ========================================================================= -->

## Lecture - 9 Topic : Control Structures
In C++ basic control structures are of three types:<br>
1. Sequence Structure
2. Selection Structure
3. Loop Structure
    
### Explaination of each control structure
**1. Flow of Sequence Structure** :<br>
    `Entry -> Perform Action 1 -> Performa Action 2 -> and so on..... -> Exit`

**2. Flow of Selection Structure** :<br>

    Entry ->check conditon--> if true --> perform Action 1 -> Exit
                              ||
                              || if false
                              ||
                              \/
                      perform Action 2 
    
Just like if-else condition.

**3. Flow of Loop Structure** :<br>
    
    Entry -> check condition -> if true =============
             ||           /\                         ||
             ||if false   ||                         ||
             ||           ||Loop                     ||
             \/           ||                         \/ 
           Exit            =================== Perform Action
    



📍[Codes of Day 6](/Day%2006)    <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 7

**Date :** `16-12-2022`
## Lecture - 10 Summary 
### Topic : While & do-while loops in C++

There are 3 types of loops in C++:
1. for loop
1. while loop
1. do-while loop

**for loop syntax :**

    for(intilization; condition ; updation){
    
        loop body(C++ code);
    
    }
    
**while loop syntax :**

    initilization;
    while(condition){
    
        loop body(C++ code);

        updation;
        
    }

**do-while loop syntax :**

    initilization;
    do {
    
        loop body(C++ code);

        updation;
        
    } while(condition);


📍[Codes of Day 7](/Day%2007)  <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 8

**Date :** `17-12-2022`
# Lecture - 11 & 12 Summary
## Lecture - 11
### Topic : Break & Continue Statements

**`break` keyword use :**

```c++
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout <<"The value of i is : "<< i << endl;  
    }

    return 0;
}
```

**Output:**
```
The value of i is : 1
The value of i is : 2
```
`break` keyword is used to stop the loop at a certain condition defined by us. <br><br>


**`continue` keyword use:**
```c++
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        cout <<"The value of i is : "<< i << endl;
    }

    return 0;
}
```
**Output:**
```
The value of i is : 1
The value of i is : 2
The value of i is : 4
The value of i is : 5
```

`continue` keyword is used to skip statements written after continue just like above example we skipped the output for `i =3` . <br>

<hr>
<!--================================================================-->

## Lecture - 12
### Topic : Pointer

**What is a Pointer ?**
>In simple words, Pointer is a datatype which holds the address of other data types.

How to create pointer ?<br>
example :
```c++
int a =3;
int* b = &a;
cout<<"The address of a is : "<<&a<<endl;
cout<<"The address of a is : "<<<b<endl;
```
**Output:**<br>

    The address of a is : 0x7ffcefc2a40c
    The address of a is : 0x7ffcefc2a40c
    
`&` --> **_Address of_**  operator<br>
`*` --> `Dereference` operator also called **_value of_**  operator or we can also say ***value at*** operator.   <br>

**Pointer to Pointer :**
```c++
int a =3;
int* b = &a;
int** c = &b;
cout<<"The address of b is : "<<&b<<endl;
cout<<"The address of b is : "<<c<<endl;
cout<<"The value at address c is : "<<*c<<endl;
cout<<"The value of address value_at(value_at(c)) is : "<<**c<<endl;

```

**Output :**
```
The address of b is : 0x7ffc837a3fa8
The address of b is : 0x7ffc837a3fa8
The value at address c is : 0x7fffc0fa5474
The value of address value_at(value_at(c)) is : 3
```
So here pointer to pointer means

```
pointer c holds address of b --> pointer b --> holds the address of 'a' variable and as we already know the variable 'a' sotres a value.
```

So when we say `*c` we are actually telling the compiler that : show us the address which stored by b pointer variable and in according to above case it will return only address stored by b pointer variable(which is address of `a` variable) .<br>
Conclusion of above statement :<br>
*c == &a(which is hold by `b` pointer) Or we can also say *c == b (adrres of `a` (&a) i.e. is present inside this `b` pointer).<br><br>

And when we say `**c` we are telling the compiler that : show us the value stored at the address of the address which is present inside 'c' pointer.<br>
Conclusion of above statement:<br>
`**c == *b` <br>
I know it's quite consfusing I will try my best to solve your confusion with the help of below diagrams.<br>
<br><br>
When we use `&` operator it tells us the address of the variable.<br>
When we use `*` operator as a suffix with a pointer variable it tells us the value stored at that address which is present inside the pointer(e.g. int* b = &a).<br>
When we use `**` double pointer or we can say pointer to pointer as a suffix with a variable then we are telling the compiler that store the address of a pointer(variable b) inside a pointer( variable c). <br>

```c++
int a  = 3;
int* b = &a;
```
**Diagram:**
        
         ___
        | 3 |
        |___|
          a
          /\
          ||
          ||
          ||
         ______________  
        |              |
        | Address of a |
        |______________|
               b 
<br><br>          
```c++
int a  = 3;
int* b = &a;
int** c = &b;
```
**Diagram:**
        
         ___
        | 3 |
        |___|
          a
          /\
          ||
          ||
          ||
         ______________  
        |              |
        | Address of a |
        |______________|
               b 
              /\
              ||
              ||
              ||
         ______________  
        |              |
        | Address of b |
        |______________|
               c 
          
<br><br>
So when we say ` cout<< c `<br>
The output will be: The address of 'b' pointer which is stored by 'c' pointer.<br>
**Diagram:**
        
         ______________  
        |              |
        | Address of b |
        |______________|
               c 
<br><br>
When we say ` cout<< *c `<br>
The output will be: The address present inside 'b' pointer.<br>
**Diagram:**

         ______________  
        |              |
        | Address of a |  
        |______________|  <===============|
               b                          |
                                          |
                                          |
                                          |      In this case the `c` pointer will call the address stored by pointer `b`  
                                          |
         ______________                   | 
        |              |                  |
        | Address of b | =================|
        |______________|
               c 

<br><br>
When we say ` cout<< **c `<br>
The output will be :<br>
**Diagram:**

         ___
        | 3 |<============||
        |___|             ||
          a               /\
         ______________   ||
        |              |  ||
        | Address of a |  <===============| 
        |______________|                  |
               b                          |
                                          |
                                          |
                                          |      In this case 'c' pointer will call the value of the address which is present 
                                          |      inside 'b' pointer i.e value stored by variable 'a'
         ______________                   | 
        |              |                  |
        | Address of b | =================|
        |______________|
               c 



📍[Codes of Day 8](/Day%2008)   <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- =============================================================================================================================================== -->

# Day 9

**Date :** `18-12-2022`
# Lecture - 13 Summary
## Topic :  Arrays & Pointers Arithmetic in C++
**Array:** It is a collection of homogenous data types that are stored in contiguous memory locations.<br>

**What is the need of array ?**
> Sometimes , a simple variable is not enough to hold all data.
e.g. We want to store 2500 students marks data, so making variable like stu1,stu2... is very tedious task so to handle that we will make a array of 2500 size which will hold data of 2500 students marks.

**Syntax :**<br>
`type variableName[];`
>NOTE: The variable field within square brackets [], representing the number of elements in the array, must be a constant expression, since arrays are blocks of static memory whose size must be known at compile time.

**INITIALIZING ARRAYS :**<br>
By default, array are left uninitialized. This means that none of its elements are set to anyparticular value; their contents are undetermined at the point the array is declared.

The initializer can even have no values, just the braces:<br>
`int marks [5] = { }; `

In C++ index always starts from 0 .

**The size of array can be undefined also :**<br>
`int marks[];` This is not allowed ❌,the constant expression need to be present inside square brackets it cannot be left empty .<br>
`int marks[] = {}; ` This is allowed ✅<br>

The C++ is already smart enough to find the size of array by the number of elements present inside braces `{}`<br>
`int marks[] = {55,66,77,45,46};` 

## C++ Pointer & Arrays
  When we want to store the address of a variable inside another variable we use pointer (hope you remember the previous day pointer concept).<br>
  In terms of storing address of a variable we do that using this way:<br>
  ```c++
  int a =5;
  int* b = &a;
  ```
  Now in terms of arrays pointer the story is different <br>
  `int marks[] ={45,55,66,77};`<br>
  Here marks is itslef represents address of first block of the array<br>
  So to store the address of an array the way is:<br>
  `int* p = &marks;` ❌ This is wrong.<br>
  `int* p = marks;` ✅ This is correct way to store the address of array in an pointer.<br>
  When we increament the pointer like `p++` the pointer will point to the second block of the marks array(index 1 because everything starts with 0 in C++).<br><br>
  **Code :**
  ```c++
  int main(){
    int marks[] = {45,55,66,77};
    int* b = marks;
    cout<<"The address inside b pointer is: "<<b<<endl;
    cout<<"The address of array is : "<<marks<<endl;
    
return 0;
}
```
**Output :**
```
The address inside b pointer is : 0x7ffcd38bf090
The address of array is : 0x7ffcd38bf090
```
<br><br>
**Printing array values with the help of pointer :**<br>
**Code :**
```c++
    int marks[] = {45,55,66,77};
    int* p = marks;
    
    cout<<"Value at marks[0] : "<<*p<<endl;
    cout<<"Value at marks[1] : "<<*(p+1)<<endl;
    cout<<"Value at marks[2] : "<<*(p+2)<<endl;
    cout<<"Value at marks[3] : "<<*(p+3)<<endl;
```
**Output :**
```
  Value at marks[0] : 45
  Value at marks[1] : 55
  Value at marks[2] : 66
  Value at marks[3] : 77
```
Same output can be achieved with the help of loop.<br>
**Code :**
```c++
    for (int i = 0; i < 4; i++)
    {
    cout<<"Value at marks["<<i<<"] : "<<*(p+i)<<endl;
    }
```

**Pointer Arithmetic :**<br>
address<sub>new</sub> = address<sub>current</sub> + i * size of datatype
>Where<br> 
>address<sub>new</sub> = (p+i)<br>
>address<sub>current</sub> = p<br>
>p means pointer variable<br>


📍[Codes of Day 9](/Day%2009)  <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 10

**Date :** `19-12-2022`
## Lecture - 14 Summary
### Topic : Structures, Unions & Enums in C++

**What is Structures ?**
>It is a user defined data type which is available in C++ (not present in JAVA).
>And it is used to compile heterogenous data types. Structures are different from arrays because in **arrays** we store similar datatype elements on the otherhand when we want to compile different datatypes elements together we use **Structures**.


```c++
    #include <iostream>
    using namespace std;
    
    struct employee
    {
        int eID ;
        float salary;

    };


    int main(){
        
        struct employee rohan;
        rohan.eID =1;
        rohan.salary = 25000;
    return 0;
    }
```




**typedef** 
keyword in C++ is used for aliasing existing data types, user-defined data types, and pointers to a more meaningful name. `typedef` allow you to give descriptive names to standard data types, which can also help you self-document your code.
Taking the above example, the code will look like this:<br>
```c++
#include <iostream>
using namespace std;

    typedef struct employee
    {
        int eID ;
        float salary;

    }ep;


    int main(){
        
        ep rohan;
        rohan.eID =1;
        rohan.salary = 25000;
    return 0;
    }
``` 
Using `typedef` is not necessary it's upto you if you want to use it or not.
<br>
<br>
**What is Union ?**<br>
>Union are better in terms of memeory management.<br>
>A union is a user-defined type in which all members share the same memory location. This definition means that at any given time, a union can contain no more than one object from its list of members.

```c++
#include <iostream>
using namespace std;

union quantity
{
    int apple;
    int mango;
    float rice;
};

int main(){

  union quantity q1;
  q1.apple = 10;
  cout<<"The quantity of apples is : "<<q1.apple<<endl;  
return 0;
}
```
**Output :**
```
The quantity of apples is : 10
```

But things will be different when we try to assign values  in more than one element of union and accessing them.
```c++
union quantity
{
    int apple;
    int mango;
    float rice;
};

int main(){

  union quantity q1;
  q1.apple = 10;
  q1.mango = 20;
  cout<<"The quantity of apples is : "<<q1.apple<<endl;  
return 0;
}

```
**Output :**
```
The quantity of apples is : 20
```

The value of apple is overriden by mango values. Means one value is shared between all elements of **Union** and only the latest values will be accessed just like above example.


<p align="center">
<img  src="/media/gifs/wait.gif" width ="480" height ="270">
</p>

**There is one interesting thing 🤯**
```c++
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
```
Now the latest overriden value is 'c' and the [ASCII](https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html) value of 'c' is 99.<br>
**Output :**
```
The quantity of apples is : 20
The quantity of mango is : 99
The value of favChar is : c
```
This shows us that typecasting is also happens between other datatypes in **Union**. 

<br>
<br>

**What are Enums in C++ ?**
>Enumerated type (enumeration) or enums is a user-defined data type which can be assigned some limited values. These values are defined by the programmer at the time of declaring the enumerated type.<br>
If we assign a float value in a character value, then the compiler generates an error. In the same way if we try to assign any other value to the enumerated data types, the compiler generates an error. Enumerator types of values are also known as enumerators. It is also assigned by zero the same as the array. It can also be used with switch statements.

**Syntax :**<br>
```
enum enumerated-type-name{value1, value2, value3…..valueN};
```

By default, the starting code value of the first element of enum is 0 (as in the case of array) . But it can be changed explicitly.

For example:<br>
```
enum enumerated-type-name{value1=1, value2 = 10, value3=40};
```
<br><br>
```c++
int main(){
    enum Meal{breakfast,lunch,dinner};
    
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
return 0;
}
```
<br><br>
enum variables can also be used as datatypes.
```c++
int main(){
    enum Meal{breakfast,lunch,dinner};
    Meal m1 = breakfast;
    Meal m2 = dinner;
    
return 0;
}
```


📍[Codes of Day 10](/Day%2010) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 11

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


📍[Codes of Day 11](Day%2011) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- =============================================================================================================================================== -->

# Day 12

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
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

return 0;
}
void swap(int num1 , int num2){  // temp   num1    num2
    int temp =num1;              // 4      4        5
    num1 = num2;                 // 4      5        5
    num2 = temp;                 // 4      5        4
}
```
**Predict the output 🧐**<br>

<img src ="/media/gifs/think2.gif" width ="250" height ="200">

**Is this the Ouput you thinked about ?**
```
The value of a is 4 and the value of b is 5
The value of a is 5 and the value of b is 4
```

<img src ="/media/gifs/yes.gif" width ="200" height ="200">
    
**If yes then you are wrong buddy.**

<img src ="/media/gifs/disappoint.gif" width ="220" height ="200">

**Yeah as a beginner this was my reaction too.**<br>
**But this is the fun part of journey right? You encounter with new things and these new things upgrade your knowlege.💯**

<img src ="/media/gifs/JimmyYes.gif" width ="220" height ="200">

<br>

**So what's the correct ouput ?**<br>
**Here you go :**
```
The value of a is 4 and the value of b is 5
The value of a is 4 and the value of b is 5
```

**And the reason behind is :** the actual parameters that are passed to `swap` function they are copied to num1 & num2 formal parameters.<br>
In short a different copy is created of 4 & 5 when we passed the values to **swap(num1,num2)** function.<br>
So even we swapped the values between num1 & num2 the values of variable 'a' & 'b' will remain the same because we passed the values only
and those values are copied to num1 & num2 and after that variable 'a' & 'b' have no relation with 'num1 & 'num2'.<br>
**This is called "Pass by Value" .**<br>

**Another small example is :** If you send a text file to your friend and if your friend do any changes in that text file then will those changes will reflect to your file too ? The answer is simple "nope" those changes will not going to show in your text file. Same happen with "pass by value" concept.<br>
See 🤠<br>
<img src="/media/gifs/easy.gif" width ="300" height ="250">

**I hope so 👀**
<br><br>

**Now what is "Pass by Reference" ?**

Let's start by a code example :
```c++
#include <iostream>
using namespace std;
// In this example we will see call by refernece concept
void swapPointer(int *, int *); // function prototype

int main()
{
    int a = 4, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swapPointer(&a, &b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    return 0;
}

void swapPointer(int *num1, int *num2)
{                     // temp   num1    num2
    int temp = *num1; // 4      4        5
    *num1 = *num2;    // 4      5        5
    *num2 = temp;     // 4      5        4
}
```

**Output :**
```
The value of a is 4 and the value of b is 5
The value of a is 5 and the value of b is 4
```
**So why this happen ? Why now values change ?**<br>
The key to understand above code is you just need little knowledge of _pointer_.<br>
```c++
void swapPointer(int *num1, int *num2)
{                     // temp   num1    num2
    int temp = *num1; // 4      4        5
    *num1 = *num2;    // 4      5        5
    *num2 = temp;     // 4      5        4
}
```
**Lets break down the swapPointer function :**<br><br>
`int temp = *num1;`
> the `*num1` is saying that fetch the value at address that is stored in `num1` pointer variable (num1 pointer stores the address of 'a' variable).<br>
>  i.e. _value at_ address of 'a'.<br>
>  fetch that value and store it in `temp` variable.<br>

`*num1 = *num2;`
> fetch the value of the address that is inside `num2` pointer variable and store that value at the address which is present inside `num1` pointer variable.

`*num2 = temp;`
> take the value that is present inside `temp` variable and store it at the address that is present inside the `num2` pointer variable.

**Another simple example is :** If you share a file on google drive and your friend done some changes in that text file. Those changes will reflect on your side too because you both are accessing the same file. Same happens with **"Call by Reference"** .


📍[Codes of Day 12](/Day%2012) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 13

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


📍[Codes of Day 13](/Day%2013) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

# Day 14

**Date :** `23-12-2022`
## Lecture - 18 Summary
### Topic :  Recursions & Recursive Functions in C++

The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.

**Need of Recursion :**
Recursion is an amazing technique with the help of which we can reduce the length of our code and make it easier to read and write. It has certain advantages over the iteration technique which will be discussed later. A task that can be defined with its similar subtask, recursion is one of the best solutions for it. For example; The Factorial of a number.

```c++
int calulateaFactorial(int n){
    return n * calulateaFactorial(n -1);
}

```

This will create an infinte recursive call and our RAM stack(where function call reside) will be overflowed.<br>
To avoid this infinite function calls we add a base condition which helps to stop the function call .

```c++
int calulateaFactorial(int n){
    if(n<=1){ //This is base condition
        return 1;
    }
    return n * calulateaFactorial(n -1);
}
```


```c++
int calulateaFactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * calulateaFactorial(n - 1);
}

int main()
{

    cout << calulateaFactorial(5) << endl;
    return 0;
}
```
Lets solve for factorial of 5

```
calculateFactorial(5){

  return 5 * calculateFacotrial(5-1);

}===========
           ||
           ||
           ||           
           \/
           calculateFactorial(4){

              return 4 * calculateFacotrial(4-1);

            }===========
                       ||
                       ||
                       ||           
                       \/
                    calculateFactorial(3){

                      return 3 * calculateFacotrial(3-1);

                    }===========
                               ||
                               ||
                               ||           
                               \/
                             calculateFactorial(2){

                                      return 2 * calculateFacotrial(2-1);

                                      }===========
                                                 ||
                                                 ||
                                                 ||           
                                                 \/
                                             calculateFactorial(1){
                                                     if(n<=1){ //Base condtion is met so function call will return from here
                                                      return 1;
                                                     }
                                                      return 1 * calculateFacotrial(1-1);//This line will not execute because we already met with base condtion
                                               }

```

This is how function call will work in recursion .<br><br>

Now lets understand this with just values and no syntax for better readability and understanding of what exactly are the function calls doing .


```

Flow of execution : top to bottom then from last line go to right side then go bottom to top.



               And now the calculated value will 5*24 = 120 
 5 * (5-1)  /-----------------------------------------------||returned value i.e. 24 will be recieved by (4-1) call
        ||  \-----------------------------------------------||
        ||                                                  ||
        ||                                                  ||
        ||                                                  ||
        ||                                                  ||
        ||                                                  ||
        \/          And now the calculated value will 4*6 = 24
        4*(4-1) /-----------------------------------------------||returned value i.e. 6 will be recieved by (4-1) call
            ||  \-----------------------------------------------||
            ||                                                  ||
            ||                                                  ||
            ||                                                  ||
            ||                                                  ||
            \/           And now the calculated value will 3*2 = 6
            3*(3-1)  /-------------------------------------------------||returned value i.e. 2 will be recieved by (3-1) call
                ||   \-------------------------------------------------||
                ||                                                     ||
                ||                                                     ||
                ||                                                     ||
                ||                                                     ||
                \/         And now the calculated value will 2*1 = 2
                2*(2-1) /----------------------------------------------------------||returned value i.e 1 will be recieved by (2-1) call
                    ||  \----------------------------------------------------------||
                    ||                                                             ||
                    ||                                                             ||
                    ||                                                             ||
                    1 //base condition met now this function right now will return 1

```

📍[Codes of Day 14](/Day%2014) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>


<!-- ================================================================================================================================================ -->

# Day 15

**Date :** `24-12-2022`
# Lecture - 19 & 20 Summary
## Lecture - 19 Topic : Function Overloading C++

Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters(formal parameters). When a function name is overloaded with different jobs it is called Function Overloading.

Compiler first takes the passed values to the function and match the prototype of the function if prototype match with the given arguments types then that function will execute.

```c++
#include <iostream>
using namespace std;

int sum(int a,int b,int c){
    return a+b+c;
}
int sum(int a, int b){
    return a+b;
}
int main(){
    
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5,7)<<endl;

return 0;
}
```
<br>
<hr>

## Lecture - 20 Topic : Object Oriented Programming in C++

![OOPs in C++](Day%2015/OOPsC++.png)<br><br>

![Procedure Oriented in C++](Day%2015/ProcedureOriented.png)<br><br>

![Object Oriented Programming in C++](Day%2015/OOPs.png)<br><br>

![Basic Concepts of OOPs](Day%2015/ConceptOfOOPs.png)<br><br>

![Benefits of OOPs](Day%2015/BenefitsOfOOPs.png)<br><br>

📍[Codes of Day 15](Day%2015/) <div align="right"><b><a href="#index">↥ Back To Top</a></b></div>

<!-- ========================================================================================================================================== -->
<br>
<hr>

<h1 id="16" align="center" > 📢 ATTENTION </h1>

<div align="center">
<img alt ="wink face gif" src="/media/gifs/Twist.gif">
</div>
<div align="center"> 
    <b>It's time for some small change😉<br>
It's been 15 days and so far I have learned many things all thanks to Code With harry YT channel.<br>
Now it's time to change few things , I want to start programming in c++ and for that I choose the Love Babbar 
<a href="https://www.youtube.com/playlist?list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f">C++ Playlist</a>
</div>

<div align="center">
<img alt ="What expression gif" src="/media/gifs/what2.gif" width="350" height="320">
</div>

<div align="center">
    
**I know I know why so sudden change in the pace ? Why direction of learning is changed ?** <br>

<img alt ="Let me explain gif" src="/media/gifs/explain.gif" >
 </div>
The reason is recently I have joined the&ensp;  <i><ins>Coding Blocks Career Bootcamp (as a Student)</i></ins>&ensp;   and in that C++ will be taught and to cope up with the pace I have decided to switch to programming in C++.<br>
Now there might be and I really mean there might be a slight possibility that some of you thinking that <br>
What we are doing so far from Day 1 to Day 15 is learning programming right ? If you're thinking in that way then the only thing the developer world want to say to you is <br>

        
<div align="center">
    
    
  <img alt ="How can be you so wrong" src="/media/gifs/Hrithik.gif">
  
  **I was in the same boat too 😅**<br>
</div>
  
  Right now what we are doing is actually learning the concepts of a programming language , we aren't doing programming.You can google it for more info.<br>
  
  And last thing I want to say yes this is temprory for some days only and then I will switch back to Code with Harry C++ playlist for now I will start Love Babbar 
  [this C++ playlist](https://www.youtube.com/playlist?list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f) and my target is to complete this playlist before `10-01-2023` (random date decided) .


    
From now onwards I will go with Day 16.1, Day 16.2 like this till my programming part is finished. After that I will come back to the code with harry playlist from where I left.</b>
<br>
<hr>
<!-- ================================================================================================================================================ -->

<h1 id="16.1">Day 16.1</h1>

[📍Video Link](https://www.youtube.com/watch?v=WQoB2z67hvY&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=1&t=872s)

**Date :** `25-12-2022`
## Lecture - 1 Summary
### Topic : Intro to Programming & Flowcharts
```
Program -> Solution
```
Breaking down problem to reach Solution :<br>
**1. Flowchart / Pseudo code** <br>
**2. Writing Program in High Level Language**

#### Flowchart : Flowchart are basically graphical representaion of an approach.
Algorithms are nothing but sequence of steps for solving problems. So a flow chart can be used for representing an algorithm. A flowchart, will describe the operations (and in what sequence) are required to solve a given problem. You can see a flow chart as a blueprint of a design you have made for solving a problem.

#### Flowchart Components :

<img src="/Day%2016/Programming/Day%2016.1/Flowchart.png" >

<br><br>

### Psuedo code :
**Sum of 2 numbers :**<br>
-> Read 2 number a & b<br>
-> sum = a+b<br>
-> print sum<br>
<br>
**We can also write this in this way too :**<br>
-> Read a<br>
-> Read b<br>
-> Let sum =0<br>
-> sum = a+b<br>
-> print sum<br>

Both ways are right ✔️. Psuedo code are just generics they are just way of representing the flow of a program execution.


<img src="/Day%2016/Programming/Day%2016.1/FlowchartExample2.png" >

<div align="right"><b><a href="#index">↥ Back To Top</a></b></div>
<br>
<hr>
<!-- ================================================================================================================================================ -->

<h1 id="16.2">Day 16.2</h1>

[📍Video Link](https://www.youtube.com/watch?v=t6zLJOCVqD0&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=2&ab_channel=CodeHelp-byBabbar)

**Date :** `27-12-2022`
## Lecture - 2 Summary
### Topic : Write Your First Program in C++

<div align="center">
  <p><b>Nope Nope</b></p>
  
  <img alt="Giving no expression gif" src="/media/gifs/no.gif">
  </div>
  <b>I didn't break the streak yesterday I was watching the Lecture - 2 of love babbar and what is taught in the first half of that video  is already covered in previous days document.
  So the conclusion is:</b>
<div align="center">
<img alt="safe gif" src="/media/gifs/safe.gif" width="300" height="200" >

**Safe 🤠**<br>
**I barely touched the line though 😬**
</div>

The first half of the video is already covered in previous days of the document.<br>
And second half of the video ? Here it goes :<br>

<br>

**How data is stored ?**

```c++              
                         
                    |=======> initialized value 
                    |
            int a = 5;
            /    \
           /      \
          /        \
         /          \
int is 4 Byte        datatype name
  
  
In memory these 4 bytes will be stored like :
1 Byte = 8 bits
4 Byte = 32 bits
Computer only understands 0 & 1.
Value 5 will be converted into binary then stored in the memory like this:
     ____________________________________
    |        |        |        |         |
    |  0000  |  0000  |  0000  |  0101   |
    |________|________|________|_________|
    
```

**Typecasting :** Converting one datatype into another datatype.

```c++

int a = 45;
char ch ='a';
cout<<"The value of a is : "a<<endl;
cout<<"The value of ch is : "<<ch<<endl;

```
We already know the output of the above code right ?

```
The value of a is : 45
The value of ch is : a
```
Now lets go a little more in depth of this.

```c++
int a ='c';
char ch = 98;
cout<<"The value of a is : "<<a<<endl;
cout<<"The value of ch is : "<<ch<<endl;
```
Will the above code going to give error ? because we are assigning character value into `int` datatype and we are assigning integer value into chararacter(`char`) datatype .
> #### The answer is : NO. The above code will work fine.


```
The value of a is : 99
The value of ch is : b
```

<img alt="But why expression gif" src="/media/gifs/why.gif" width="350" height="200">

### The reason is ...
<img alt="Mai nahi bataunga gif" src="/media/gifs/NotGonnaTell.gif" width="350" height="200">

**Just kidding buddy 😄** (I am just trying to make learning fun sorry if I annoyed you 😅)

Lets come to back to the point.

**So the reason is : Because internally the compiler did typecasting**
```c++
int a ='c';
char ch = 98;
```
```
The character value 'c' is mapped to 99 (you can check ASCII table) this 97 as a integer is totally fine.
The 99 value is converted into binary then stored inside the RAM 
(Yup RAM not ROM because our all programs load in RAM before execution).


     ____________________________________
    |        |        |        |         |
    |  0000  |  0000  |  0110  |  0011   |
    |________|________|________|_________|


Same thing happened in 'ch' variable case too. The 98 value is mapped to character 'b'(refer ASCII table) 
the 98 value will first converted into binary then stored inside RAM.

                 _________________
                |        |        |
                |  0110  |  0010  |
                |________|________|


```
### 💭The bootom line is : In computer everything is stored in 0 & 1 becuase computer can understand 0 & 1 only

<br>

Now you may think during output time how compiler knows that its need to print integer value not character afterall everything is stored in binary right 🤔?
> **So the answer is : With the help of variable datatype.**

By checking the variable datatype compiler decides that the binary which is stored inside RAM in what format does that binary number need to be converted. Each variable is assigned with a address location at which the value or to be more precise the binary number is stored.

<img alt="awesome expression gif" src="/media/gifs/awesome.gif" width="350" height="200" >

<br>

int have 4 bytes of storage available
>i.e 2<sup>31</sup> - 1

**We said int have 4 byte storage that means 32 bit so why 31 🤨?**<br>
**The reason is : The left most bit( _called most significant bit(msb)_) is used to determine whether the number is positive or negative number.
So the left most bit is reserved for negative and positive sign.**
```c++
     _______________________________________
    |           |        |        |         |
    |  0  0 0 0 |  0000  |  0110  |  0010   |
    |  /\       |        |        |         |
    |__|________|________|________|_________|
    
    (sorry for mismatched arrow but I hope you got the idea what I am talking about)
```
### How range of a datatype is calculated ?
> #### -2<sup>N-1</sup> to 2<sup>N-1</sup> - 1<br>
> Where N = number of bits<br>
> Above formula is for signed datatypes<br>

> Formula for finding the range of unsigned datatype is : **2<sup>N</sup> - 1**

**char** have 1 byte of storage available
> i.e 2<sup>8</sup>-1 (for unsigned char)

>-2<sup>7</sup> to 2<sup>7</sup>-1 (for signed char)<br>
> signed char means -->it can be positive or negative means -->the left most bit is reserved for negative and positive sign.

**Now what if we try to store a value which is greater than the capacity of a datatype ?**

Lets understand this with the help of code :
```c++
#include <iostream>
using namespace std;

int main()
{ 
    char ch=123456;
    cout<<"The value of ch is : "<<ch<<endl;
```
**Output :**
```
demo.cpp: In function ‘int main()’:
demo.cpp:8:13: warning: overflow in conversion from ‘int’ to ‘char’ changes value from ‘123456’ to ‘'@'’ [-Woverflow]
    6 |     char ch=123456;
      |             ^~~~~~
      
The value of ch is : @
```
>_demo.cpp_ is my file name (ignore that part)

Overflow condition happens and the output we get is `@`.<br>
The integer value 123456 is converted to 64 which is @ in ASCII table .<br>

What we are actually doing is we are trying to put our 4 byte integer value 123456 inside char which is 1 byte because of that overflow condition is created and then compiler generates a warning why warning not an error ? because this is not an error and this type of typecasting creates the possibility of losing data.

**Now you might think why 64 why not 65,68 etc ?**<br>
Now this is interesting part so I need your full attention on this

Lets understand with a small example
```c++
char ch = 129;
int a = ch;
cout<< "The value of ch is : "<< a<<endl;
```
I am using integer variable because it's have longer range so it will be easy to see changes.

**Output :**
```
The value of ch is : -127
```
**Now why this ?**<br>

Lets do some maths <br>

`char` is signed(for now lets suppose that) which means -2<sup>7</sup> to 2<sup>7</sup>-1 so the range is _-128 to 127_ <br>

**Why not -128 to 128 ?**<br>

I think you already know the reason.<br>

But still<br>
<img alt ="Giving let me remind you expression gif" src="/media/gifs/remind.gif"  width="350" height="200" >

The reason is because 0 is also counted.&ensp; **-2<sup>N-1</sup>  to 2<sup>N-1</sup> -1** &nbsp;in  &ensp;**2<sup>N-1</sup> -1** the `-1` part is included because 0 is also counted in the range of every datatype **that's the reason** `-1` exist (I'm not talking about N-1 in the power, I'm talking about -1 which is in base) <br>

### Now the next question is : When overflow condition happens how these values are converted 🤔 or We can say how compiler convert these overflowed values ?
Lets take our previous example:

```c++
char ch = 129;
int a = ch;
cout<< "The value of ch is : "<< a<<endl;
```

**Output :**
```
The value of ch is : -127
```

```c++
           _______________________________________________  
          |     |     |     |     |     |     |     |     |
          |  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |
          |     |     |     |     |     |     |     |     |
           _______________________________________________  
            /|\
             |          
             |
             |
             |______________ This is called msb which is reserved in case of signed datatypes just like in our char example
                             char is of 1 byte 
                             1 byte = 8 bits
                             Since left most bit is reserved for positive and negative we left with 7 bits
                             Which lead us to the range of 
                             -2^7 to -2^7 -1 = -128 to 127
                             
          
          
          When we try to store 129 inside signed char what really happens is ?
          This condition is called "overflow".
          
          When we try for 129 
          
                  -128   to    127    129 is two numbers ahead, in this case we will minus the maximum range of signed char value from our value
                                      i.e 129 - (2^7) =1  // Why ? don't forget that we need to includ 0 too that's why we are taking "2^7" not                                                                 "2^7 -1"
                                      Now this 2 will be added to our minimum range of signed char
                                      i.e 1+(-128) = -127
                                      
          When we try for 135
                         First we will minus the maximum range from our value range of signed char
                         i.e 135 - (2^7) = 7
                         Now this 8 will be added to our minimum range range of signed char
                         i.e 7+(-128) = -121
                  
          
          When we try for 150
                        150-(2^7) = 22
                        Now this 22 will be added to our minimum range
                        i.e 22 + (-128) = -106
          
          I hope you now you able to see a pattern like below diagram when values are converting  :
          
                     ________________\__________________________
                    |                /                         |
                   /|\                                         |
           _________|_____________________________________     |  
          |     |     |     |     |     |     |     |     |    |
          |  0  |  0  |  0  |  0  |  0  |  0  |  0  |  0  |    |
          |     |     |     |     |     |     |     |     |   \|/
           _________|_____________________________________     |
                   /|\                                         |
                    |                                          |
                    |___________________/______________________|
                                        \
           

          
          When we try for 516 (random number) now it will become some interesting. Pay attention to this
          
                      First we minus the maximum range of signed char with our value
                        i.e 516 - (2^7) = 388
                      Now we add this in our signed char minimum range
                        i.e 388 + (-128) = 260
                        Since 260 is still beyond the signed char maximum range we will repeat the steps
                        
                        Now again we will minus the maximum range of signed char with our value
                         ie. 260 - (2^7) = 132
                        Now we will add this in our signed char minimum range
                         i.e 132 + (-128) = 4
                         
          Can you see the loop that is goinf on again and again until the value is fit inside the signed char datatype range ?
          That's what I am talking about the steps will be keep repeating until the value is fit according to the datatype ranges.
```          
You can try this by yourself
          
here is the code
```c++          
          #include <isostream>
          using namespace std;
          char ch = 516;
          cout<<"The value of ch is : "<<ch<<endl;
          cout<<"The value of ch is : "<<(int)ch<<endl;
          
```
In unsigned char the range will be
### 2<sup>8</sup> - 1
>**Means the range is 0 to 255 i.e total 256. Unsigned means no negative , so there will be no need to reserve the left most bit(msb) for positive or negative anymore**
>And same calulation will be done in overflow condition just like above examples. Nothing will change.

### By default all datatypes are signed so that means all datatypes left most bit is reserved for positive and negative<br>

<img src="/media/gifs/remember.gif" width="250" height="250">

<hr>

**Date :** `28-12-2022`

**Now how negative numbers are stored ?**

I think you already know this by now.<br>
The left most bit (also called most significant bit) will be used.<br>
0 --> for positive<br>
1 --> for negative<br>

**Now lets go little in depth in this**<br>

Suppose we want to store -5 . What are the steps to store this negative number.<br>

- First ignore the negative sign.
- Second convert it into binary representation
 ```c++ <!-- I am adding this to make the numbers colorful-->
i.e 0000 0000 0000 0101
```          
- Third : Take 2's compliment of this binary number and store it
  
  **Process of 2's compliment** 
  
  First take the 1's compliment of 101<br>
  How ?<br>
  Just reverse the 1's into 0's and vice-versa
```c++   
i.e 1111 1111 1111 1010  
```
  Now take 2's compliment<br>
  How ?<br>
  Just add the 1 in the 1's compliment value
 ```c++     
  i.e 1111 1111 1111 1010
                        1+
     _____________________
      1111 1111 1111 1011   
     /|\
      |
      |
      |_________________________________This shows that the number is negative
```  
   **Now if we want to print this number how we will do that ?**
   > Just take 2's compliment of the result value that's all.
```c++    
      1111 1111 1111 1011
```
   Take 1's compliment first
```c++     
   i.e 0000 0000 0000 0100
```
   Take 2's compliment by adding 1
 ```c++  
      i.e 0000 0000 0000 0100
                            1+
          ____________________
          0000 0000 0000 0101 
      
      That's it
      Now you may think it will be same as positive 5 right ? Here's the catch
      The compiler take the msb of the stored binary number
      i.e. 1111 1111 1111 1011
          /|\
           |
           |
           |________________________________Compiler will see this which will help in determining the sign of the stored number 
```
        After doing 2's compilment
        it will add this negative sign to our output number
        i.e. - 5



<img alt="Ron saying cool expression gif" src="/media/gifs/cool.gif" width="300" >

<br>

>### Note : In-built unsigned datatypes are only available in c/c++

<br>

>**In java there isn't usnsigned datatypes. But from Java 8 onwards you can avail the benefit of unsigned datatypes by using classes , one example is Integer class [check this oracle doc for more info](https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html#:~:text=In%20Java%20SE%208%20and,Number%20Classes%20for%20more%20information.)**<br>



<div align="right"><b><a href="#index">↥ Back To Top</a></b></div>

<hr>


## Thank you so much for reading this so far 🥺.See you next time because


<img src = "media/gifs/SRK.gif" width = "1000" height ="400">


<hr>

**If you're an JAVA programmer and started learning C++ just like me**<br>
📍[this might be helful for you too](Things_Only_Present_in_C%2B%2B_AND_Not_In_JAVA.md)
