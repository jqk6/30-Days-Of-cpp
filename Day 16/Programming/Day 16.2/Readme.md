**Date :** `27-12-2022`
# Lecture - 2 Summary
## Topic : Write Your First Program in C++
[📍Video Link](https://www.youtube.com/watch?v=t6zLJOCVqD0&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=2&ab_channel=CodeHelp-byBabbar)

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

```              
                         
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
cout<<"The value of a is : "a<<endl;
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

     _______________________________________
    |           |        |        |         |
    |  0  0 0 0 |  0000  |  0110  |  0010   |
    |  /\       |        |        |         |
    |__|________|________|________|_________|
    
    (sorry for mismatched arrow but I hope you got the idea what I am talking about)

### How range of a datatype is calculated ?
> #### -2<sup>N-1</sup> to 2<sup>N-1</sup> - 1<br>
> Where N = number of bits<br>
> Above formula is for signed datatypes<br>

> Formula for finding the range of unsigned datatype is : **2<sup>N</sup> - 1**

char have 1 byte of storage available
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

The reason is because 0 is also counted.&ensp; **-2<sup>N-1</sup>  to 2<sup>N-1</sup> -1** &nbsp;in  &ensp;**2<sup>N-1</sup> -1** the `-1` part is included because 0 is included in the range of every datatype **that's the reason** `-1` exist (I'm not talking about N-1 in the power, I'm talking about -1 which is in base) <br>

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
<hr>

📑[All in one file](/Journey_so_far.md)📍
