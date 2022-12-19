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
    int* b = marks;
    
    cout<<"Value at marks[0] : "<<*b<<endl;
    cout<<"Value at marks[1] : "<<*(b+1)<<endl;
    cout<<"Value at marks[2] : "<<*(b+2)<<endl;
    cout<<"Value at marks[3] : "<<*(b+3)<<endl;
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
    cout<<"Value at marks["<<i<<"] : "<<*(b+i)<<endl;
    }
```

**Pointer Arithmetic :**<br>
address<sub>new</sub> = address<sub>current</sub> + i * size of datatype
>Where<br> 
>address<sub>new</sub> = (p+i)<br>
>address<sub>current</sub> = p<br>
>p means pointer variable<br>






<hr>


📑[All in one file](https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/main/Journey_so_far.md)📍
