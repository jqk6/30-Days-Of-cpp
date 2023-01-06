**Date :** `06-01-2023`
## Lecture 8 Summary
### Topic： Switch Statement & Functions
📍[Video Link](https://www.youtube.com/watch?v=8nNqk2NPbRA&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=8)

**What is Switch**
>You can easily find the definition on google. In short , switch is an alternative of if-else-if ladder.


**Structure of switch**
```c++
switch(expression){
  case constantValue1 : Task you want to do for this specific case
                         break;   (break line is very important)
  case constantValue2 : Task you want to do for this specific case
                         break;
  .
  .
  .
  n cases as much you want
  
  default : In case no case is matched what you want to do , you can add that here

}
```
<br>

**Example**
https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/96016ea7ff22d4efb67835709b5b74fa5d16b3d4/Day%2016/Programming/Day%2016.8/SwitchExample.cpp#L8-L14

**What datatypes are allowed in swithc expression ?**
> `int` , `char` , `short` and yeah `byte` is allowed but there is little workaround you need.
> > `byte` is a enum class std::byte in C++ . So yeah byte is not a primitive datatype.

<br>

**Workaround for byte use in switch**
https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/96016ea7ff22d4efb67835709b5b74fa5d16b3d4/Day%2016/Programming/Day%2016.8/byteUseInSwitch.cpp#L7-L15

<br>




<hr>
  
  📑[All in one file](/Journey_so_far.md)📍
