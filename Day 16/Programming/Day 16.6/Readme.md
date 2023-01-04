**Date :** `04-01-2023`
## Lecture 6 Summary
### Topic： Binary & Decimal Number System
📍[Video Link](https://www.youtube.com/watch?v=bWrsk0QizEk&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=6)

**In this lecture we will understand how to convert binary to decimal and vice versa through simple maths.**

**I am not telling anything new you may already know this.**

```c++
If you want to convert a decimal number to bianry number one way is keep dividing the value by 2 

Lets take an example.

Convert 9 to binary
   ______________________________
  | Value  | Quotient | remainder|
  |________|__________|__________|  /|\
  |  9 / 2 |   4      |    1     |   |
  |  4 / 2 |   2      |    0     |   |
  |  2 / 2 |   1      |    0     |   | Take all remainders in bottom to top direction 
  |  1 / 2 |   0      |    1     |   |
  --------------------------------   |
  
  Take the remainder from bottom to top and write down in left to right direction that is 1 0 0 1
  You need to divide the decimal value eveytime and whatever divisor you get you again divide it by 2.
  Keep dividing till the quotient reach 0 
  (we are taking integer and integer do not allow decimal values  0.5 like this not possible)
  then take the remainder in the way I showed you: top to bottom.
 ```
 
 **Now convert binary to decimal**
 ```c++
 E.g.
      Convert 1110 to decimal
         
         1   1   1   0 
 ```
  2<sup>3</sup> x 1 + 2<sup>2</sup> x 1 + 2<sup>1</sup> x 1 + 2<sup>0</sup> x 0 <br>
 = 8 + 4 + 2 + 0 <br>
 = 14
 
 >Don't forget to check the codes of today.
 
  <hr>
  
  📑[All in one file](/Journey_so_far.md)📍
