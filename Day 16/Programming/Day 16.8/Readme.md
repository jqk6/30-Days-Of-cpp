**Date :** `06-01-2023`
## Lecture 8 Summary
### Topic： Switch Statement & Functions
📍[Video Link](https://www.youtube.com/watch?v=8nNqk2NPbRA&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=8)

**What is Switch ?**
>You can easily find the definition on google. In short , switch is an alternative of if-else-if ladder.


**Structure of switch ?**
```c++
switch(expression){
  case constantValue1 : Task you want to do for this specific case
                         break;   (break statement is very important)
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

**Date :** `07-01-2023`

**Can you use switch inside switch ?**
>Yes

```c++
    int num = 1;
    char ch = 'a';

    switch (ch)
    {
    case 1:
        cout << "Case 1 of ch" << endl;
        break;
    case 'a': switch (num)
                {
                case 1 : cout<<"The num value is 1"<<endl;
                    break;
                
                case 2 : cout<<"The num value is 2"<<endl;
                    break;
                default:cout<<"The default case of num"<<endl;
                }
                break;
    }
```
>But I don't think we usually going to need this nested switch at all.

<br>

<img alt="Let me show you something" src="/media/gifs/show-you-something.gif">

```c++
    int num1 = 1;
    int num2 = 2;

    if(num1 == 1 || num2 == 2){
        cout<<"Hello World"<<endl;
    }
```
<br>

**How you will write the above code in switch ?**

```c++
    int num1 = 1;
    int num2 = 2;
    switch (num1)
    {
    case 1:
         case 2 : cout<<"Hello World"<<endl;
    }
```
>default is not mandatory.

**Need of break ?**

We learn better with example, right ? Lets get into it

**Code :**
```c++
    int num =1;
    switch (num)
    {
    case 1: cout<<"Hi"<<endl;
    case 2 : cout<<"Hello ?"<<endl;
    case 3 : cout<<"Please reply"<<endl;
    }
```

**Output**

```
Hi
Hello ?
Please reply
```
>*I hope this is not brining your instagram/facebook days* 😂 sorry for being too mischievous 🙃

Now lets get to the point. As you can see in the above example code of Hi hello because there wasn't any break so when the `case 1` start executing
all the other cases also get executed.

**This is the reason why we need break statement after each case.**

<br>

**You can use constant value in your expression.**

**If your question is : "What do you exactly mean by that🤨?"**

See the below example.
https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/ef2aca182e9f56b29960bc6b4e5c6d22bd227e2d/Day%2016/Programming/Day%2016.8/switchExpression.cpp#L6-L12

>If your given expression gives a constant value after calculation then it's valid.

<br>

<img alt="Homework time" src="/media/gifs/hw.gif"  height = "300">

<b>
Question :
  
```
You have Rs.1330 now you need to calculate how many notes you have
Possible notes : Rs.100 , Rs.50, Rs.20, Rs.10
Given amount , you need to calculate how many notes of 100s,50s,20s & 10s are present 
Solve this question using switch.
Constraint : The amount need to be multiple of 10
```
>Please solve from your side first.
## 💭 There is no glory in practice but there is no glory without practice💯
  
>📍[Solution of the above question](/Day%2016/Programming/Day%2016.8/tellTheNumberOfNotes.cpp)
  
</b>

<hr>

**Date :** `08-01-2023`

I watched the Function part of the video and I don't find anyting new yet so yeah you can refer [📍Day 11 notes](/Journey_so_far.md#day-11) directly.

<hr>

**Date :** `09-01-2023`
https://github.com/ItsAnkitPatel/30-Days-Of-cpp/blob/d28250cacee2b91de3cda6c5e3d929ddc1f55669/Day%2016/Readme.md?plain=1#L38

### We did it🎉
<img alt="we won we did it" src= "/media/gifs/wewon.gif">

<b>We completed the Love babbar [basic C++ playlist](https://youtube.com/playlist?list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f). We completed this part of journey without breaking consistency😁.</b>
<div align ="center">
  <b>Power of being 🦾DISCIPLINED</b> <br>
  <b>And I am very happy that I am able to do this before deadline</b>
  <br>
  <img alt = "relief" src = "/media/gifs/relief.gif" height ="300">
  
 

<p align="center">
  
# [📢 Check Announcement](/Day%2016/Programming/Announcement.md)

</p>
  
</div>
<hr>

  
  📑[All in one file](/Journey_so_far.md)📍
