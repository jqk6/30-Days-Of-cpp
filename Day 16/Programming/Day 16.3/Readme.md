**Date :** `30-12-2022`
## Lecture 3 Summary
### Topic： If-Else, While loop & Lots of Patterns (Part-1)
📍[Video Link](https://www.youtube.com/watch?v=WR31ByTzAVQ&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=3&ab_channel=CodeHelp-byBabbar)

>If-else and While loop are already covered in previous <a href="/Journey_so_far.md/#day-7">Day 7 notes</a> 

**Before jumping to patterns**

**I found something interesting** (as newbie in C++ it is interesting for me)
When we try to take input from `cin` the space(' ') , tabs(\t) , enter(\n) ignored by cin during taking input from the terminal.<br>
But when we try to take input from `cin.get` the story is different<br>
Let me show you how to use cin.get:

```c++
int main(){
    
    int a = cin.get(); //Giving input as 1
    cout<<"The value of a is "<<a<<endl; 
return 0;
}
```
**Output :**
```
The value of a is 49
```

**Why ?**<br>
>cin.get reads the input as character and give output according to the ASCII table of the given input for e.g. for input 1 it gives 49 because character '1' decimal value is 49.<br>
>[For more info click here](https://www.geeksforgeeks.org/cin-get-in-c-with-examples/)

<hr>

**Date :** `31-12-2022`

#### Questions on loops

First dolve by yourself then see the code .

**Q 1. WRAP to print 1 to n number , n will be given by the user .**
>[Solution](/Day%2016/Programming/Day%2016.3/printNnumbers.cpp) <br>
>WRAP(Write a program)

**Q 2. WRAP to print sum of the values from 1 to n number, n will be given by the user .**
>[Solution](/Day%2016/Programming/Day%2016.3/PrintSumOfNumbers.cpp)
