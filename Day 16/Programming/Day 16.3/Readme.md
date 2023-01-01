**Date :** `30-12-2022`
## Lecture 3 Summary
### Topic： If-Else, While loop & Lots of Patterns (Part-1)
📍[Video Link](https://www.youtube.com/watch?v=WR31ByTzAVQ&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=3&ab_channel=CodeHelp-byBabbar)

>If-else and While loop are already covered in previous <a href="/Journey_so_far.md/#day-7">Day 7 notes</a> 

**Before jumping to patterns**

**I found something interesting** (as newbie in C++ it is interesting for me)
When we try to take input from `cin` the space(' ') , tabs(\t) , enter(\n) ignored by `cin` during taking input from the terminal.<br>
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

First solve by yourself then see the code .

**Q 1. WRAP to print 1 to n number , n will be given by the user .**
>📍[Solution](/Day%2016/Programming/Day%2016.3/printNnumbers.cpp) <br>
>WRAP(Write a program)

**Q 2. WRAP to calculate sum of the values from 1 to n number, n will be given by the user .**
>📍[Solution](/Day%2016/Programming/Day%2016.3/PrintSumOfNumbers.cpp)

**Q 3. WRAP to calculate sum of the even numbers from 2 to n number, n will be given by the user .**
>📍[Solution](/Day%2016/Programming/Day%2016.3/printSumOfEvenNumbers.cpp)

**Q 4. WRAP to check whether the given number is prime or not.**
>📍[Solution](/Day%2016/Programming/Day%2016.3/primeOrNot.cpp)

<hr>

**Date :** `01-01-2023`

Now lets start pattern 

**But why pattern ?**<br>
>Pattern helps to deepen our logic building.

Lets start with a beginner level

**1.**
```
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```
>Hint : Use nested loop


Print this patten as it is. Each star must have one space between them.
>📍[Solution](/Day%2016/Programming/Day%2016.3/PatternQuestions/pattern1.cpp)



**2.**
```
For input 4             For input 3
* * * *                 * * *
* * * *                 * * *    
* * * *                 * * *
* * * *
```
Take the above pattern as example and print the above pattern according to the user input.
>📍[Solution](/Day%2016/Programming/Day%2016.3/PatternQuestions/pattern2.cpp)



**3.**
```
1 1 1
2 2 2
3 3 3
4 4 4
5 5 5
```
Print he above pattern as it is.
>📍[Solution](/Day%2016/Programming/Day%2016.3/PatternQuestions/pattern3.cpp)


**4.**
```
For input 5     For input 4
1               1           
2 2             2 2
3 3 3           3 3 3
4 4 4 4         4 4 4 4
5 5 5 5 5
```
Take the above pattern as example and print the above pattern according to the user input.
>📍[Solution](/Day%2016/Programming/Day%2016.3/PatternQuestions/pattern4.cpp)

**5.**
```
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
```
Print the above pattern as it is.
>📍[Solution](/Day%2016/Programming/Day%2016.3/PatternQuestions/pattern5.cpp)

**6.**
```
For input 5         For input 4
1 1 1 1 1           1 1 1 1
2 2 2 2             2 2 2
3 3 3               3 3 
4 4                 4
5
```
Take the above pattern as example and print the above pattern according to the user input.
>📍[Solution](/Day%2016/Programming/Day%2016.3/PatternQuestions/pattern6.cpp)
<br>


You can refer to the video for better understanding of what's happening behind the scenes of these pattern and how to solve it. If you are a beginner in coding I must recommend you to watch the video.
>📍[Vide Link](https://youtu.be/WR31ByTzAVQ?list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&t=2690)

<hr>

📑[All in one file](/Journey_so_far.md)📍
