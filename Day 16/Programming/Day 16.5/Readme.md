**Date :** `03-01-2023`
## Lecture 5 Summary
### Topic： Lecture 5： Bitwise Operators, For Loops, Operator Precedence & Variable Scoping
📍[Video Link](https://www.youtube.com/watch?v=yjdQHb2elqI&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=5&ab_channel=CodeHelp-byBabbar)

### Bitwise Operators

**We only need to understand 4 types of bitwise operators**
- AND `&`
- OR  `|`
- NOT `~`
- XOR `^`

All operators will work on bit level
#### AND
```c++
Truth table

A & B = C
0   0   0
0   1   0
1   0   0
1   1   1
```
Lets take an example for better understanding
```c++
2 & 3 = 2
How ?

First convert the given values into binary
i.e
2 = 10
3 = 11
Now take AND of these binary values

    10
   &11
  _____
    10 
  _____
  
  With the help of truth table we can easily solve this.
  
  Now the output values is 1 0 which when we convert to decimal number it will give 2 as a answer
```

<br>

#### OR
```c++
A | B = C
0   0   0
0   1   1
1   0   1
1   1   1
```
Lets take an example

```c++
7 | 5 = 7

First convert the given values into binary
i.e
7 = 111
5 = 101
Now take AND of these binary values

    111
  | 101
  ______
    111 
  ______
  
  With the help of truth table we can easily solve this.
  
  Now the output values is 111 which when we convert to decimal number it will give 7 as a answer
  
  
  
  
Lets take another example
  2 | 4 = 6
First convert the given values into binary
i.e
2 = 10
4 = 100
        
        
        010 (all left bits are zero that's why we added 0 in the left side )
      | 100
    _________
        110
    _________
    
  With the help of truth table we can easily solve this.
  
  Now the output values is 110 which when we convert to decimal number it will give 6 as a answer
```

<br>


#### NOT
```c++
A   C
0   1
1   0

It will just invert the bit (1 ka zero , zero ka 1)
```
Need your little more attention here🧐

**Example :**
```c++
~2 = ?

Before knwoing the direct answer lets deep dive how things will work

First we will convert 2 into binary 
i.e. 1 0
As we know integer is 4 bytes then all the bits on the left hand side of 1 0 are all 0's .Littble bit confusing😵‍💫. No worry your saviour is here🤠(Sorry if I sound rude , just trying to make learning fun)

Lets do some representation

2 in binary
     ____________________________________
    |        |        |        |         |
    |  0000  |  0000  |  0000  |  0010   |
    |________|________|________|_________|
    
Now when we do ~2 what will happen to this binary?
With the help of NOT operator truth table we can predict that all the 1s will be converted into 0s 
and all 0s will be converted 1

So the result of inversion of 2 binary is
             ____________________________________
            |        |        |        |         |
            |  1111  |  1111  |  1111  |  1101   |
            |________|________|________|_________|

Now the compiler will take 2s compliment . Yup yup you read it right.

Now I think you already know 2s compliment but let me explain for you

First we will take 1s compliment in which we going to invert the values of the above binary number. Yeah again inversion😂

After invert the result is
             ____________________________________
            |        |        |        |         |
            |  0000  |  0000  |  0000  |  0010   |
            |________|________|________|_________|
            
Now the second part of 2s compliment is add 1 to this binary number
i.e

      0000 0000 0000 0010
                       +1
    _______________________
      0000 0000 0000 0011        = 3 in decimal but as we know the will take the msb for sign  
    _______________________          which is negative in this case so the output will be ?
    
    Yeah you guessed it right
    
    ~2 = 3
    
THIS IS THE WHOLE STORY BEHIND NOT OPERATOR
```
    
```
<hr>                            

📑[All in one file](/Journey_so_far.md)📍
