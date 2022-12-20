# 💭10 minutes a day keep procastination away💯
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
`::` this symbol is called space resolution operator.<br>
<hr>

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
- int
- Float
- Char
- Double
- Boolean

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

<br>
<hr>

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
<br>
<hr>

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

<br>
<hr>

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
<br>
<hr>

# Day 6

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
    



    

<br>
<hr>

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

<br>
<hr>

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
<!--=================================================================================================================================================-->

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

<br>
<hr>

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

<br>
<hr>

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






<br>
<hr>

## Thank you so much for reading this so far 🥺.See you next time because

<img src = "media/gifs/SRK.gif" width = "1000" height ="400">
