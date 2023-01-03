**Date :** `03-01-2023`
## Lecture 5 Summary
### Topic： Lecture 5： Bitwise Operators, For Loops, Operator Precedence & Variable Scoping
📍[Video Link](https://www.youtube.com/watch?v=yjdQHb2elqI&list=PLDzeHZWIZsToJ9zSl4-5BfOBzAR0fm--f&index=5&ab_channel=CodeHelp-byBabbar)

### Bitwise Operators

<ul>
    <li><a href ="#and">AND </a><code>&</code></li>
    <li><a href ="#or">OR </a><code>|</code></li>
    <li><a href ="#not">NOT </a><code>~</code></li>
    <li><a href ="#xor">XOR </a><code>^</code></li>
    <li><a href ="#ls">Left Shift </a><code>>></code></li>
    <li><a href ="#rs">Right Shift </a><code><<</code></li>
    
</ul>

All operators will work on bit level
<h4 id=and>AND</h4>

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

<h4 id=or>OR</h4>

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

<h4 id=not>NOT</h4>

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

<br>

<h4 id=xor>XOR</h4>

```c++
A ^ B = C
0   0   0
0   1   1
1   0   1
1   1   0

Means if both bit are same the output always will be zero
```
**Example**
```c++
2^4 =?
First convert the given values into binary
i.e
2 = 10
4 = 100

            010
          ^ 100
       __________
            110   
       __________
       
       110 binary is 6 in decimal       
```

<br>

<h4 id=ls>Left Shift</h4>

```c++
5<<1 =?

Lets understand with the help of binary representation
             ____________________________________
            |        |        |        |         |
            |  0000  |  0000  |  0000  |  0101   |
            |________|________|________|_________|
            
            When we say 5<<1 it means we are saying shift all bits to left by one position
            i.e
             ____________________________________
            |        |        |        |         |
            |  0000  |  0000  |  0000  |  1010   |
            |________|________|________|_________|
            
            101 is shift by one position bit by bit and in right most position 0 is added.
            
            So now the decimal value of 1010 is 10
            
```
**Another Example**

```c++
3<<2 =?

Lets understand with the help of binary representation
             ____________________________________
            |        |        |        |         |
            |  0000  |  0000  |  0000  |  0011   |
            |________|________|________|_________|

            When we say 3<<2 it means we are saying shift all bits to left by two position
                Lets breakdown this
                When we shift 3 by 1 (3<<1)
                This will be the output
                         ____________________________________
                        |        |        |        |         |
                        |  0000  |  0000  |  0000  |  0110   |
                        |________|________|________|_________|
                Now if we repeat this step
                the output will be
                         ____________________________________
                        |        |        |        |         |
                        |  0000  |  0000  |  0000  |  1100   |
                        |________|________|________|_________|
                This gives us the result of 3<<2
                
              And the decimal value of 1100 is 12 
```


<br>


<h4 id=rs>Right Shift</h4>

Just opposite of left shift operator

```c++
5>>1 =?

Lets understand with the help of binary representation
             ____________________________________
            |        |        |        |         |
            |  0000  |  0000  |  0000  |  0101   |
            |________|________|________|_________|
            
            When we say 5>>1 it means we are saying shift each bit to right by one position
            
            
             ____________________________________
            |        |        |        |         |
            |  0000  |  0000  |  0000  |  0010   |
            |________|________|________|_________|
            
            The decimal value of 10 is 2
```


<hr>                            

📑[All in one file](/Journey_so_far.md)📍
