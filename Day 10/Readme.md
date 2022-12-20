**Date :** `19-12-2022`
## Lecture - 14 Summary
### Topic : Structures, Unions & Enums in C++

**What is Structures ?**
>It is a user defined data type which is available in C++ (not present in JAVA).
>And it is used to compile heterogenous data types. Structures are different from arrays because in **arrays** we store similar datatype elements on the other when we want to compile different datatypes elements together we use **Structures**.


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



<hr>


📑[All in one file](https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/main/Journey_so_far.md)📍
