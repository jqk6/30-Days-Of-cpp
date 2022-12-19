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
