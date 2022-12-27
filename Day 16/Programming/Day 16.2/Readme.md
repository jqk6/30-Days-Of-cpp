**Date :** `27-12-2022`
## Lecture - 2 Summary
### Topic : Write Your First Program in C++
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

**So the reason is because internally the compiler did typecasting**
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

     ____________________________________
    |        |        |        |         |
    |  0000  |  0000  |  0110  |  0010   |
    |________|________|________|_________|


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

**We said int have 4 byte storage that means 32 bit so why 31 🤨?**
**The reason is : The left most bit( _called most significant bit(msb)_) is used to determine whether the number is positive or negative number.
So the left most bit is reserved for negative and positive sign.**

     _______________________________________
    |           |        |        |         |
    |  0  0 0 0 |  0000  |  0110  |  0010   |
    |  /\       |        |        |         |
    |__|________|________|________|_________|
    
    (sorry for mismatched arrow but I hope you got the idea what I am talking about)



char have 1 byte of storage available
> i.e 2<sup>8</sup>-1
