**Date :** `23-12-2022`
## Lecture - 16 Summary
### Topic :  Recursions & Recursive Functions in C++

The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.

**Need of Recursion :**
Recursion is an amazing technique with the help of which we can reduce the length of our code and make it easier to read and write. It has certain advantages over the iteration technique which will be discussed later. A task that can be defined with its similar subtask, recursion is one of the best solutions for it. For example; The Factorial of a number.

```c++
int calulateaFactorial(int n){
    return n * calulateaFactorial(n -1);
}

```

This will create an infinte recursive call and our RAM stack(where function call reside) will be overflowed.<br>
To avoid this infinite function calls we add a base condition which helps to stop the function call .

```c++
int calulateaFactorial(int n){
    if(n<=1){ //This is base condition
        return 1;
    }
    return n * calulateaFactorial(n -1);
}
```


```c++
int calulateaFactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * calulateaFactorial(n - 1);
}

int main()
{

    cout << calulateaFactorial(5) << endl;
    return 0;
}
```
Lets solve for factorial of 5

```
calculateFactorial(5){

  return 5 * calculateFacotrial(5-1);

}===========
           ||
           ||
           ||           
           \/
           calculateFactorial(4){

              return 4 * calculateFacotrial(4-1);

            }===========
                       ||
                       ||
                       ||           
                       \/
                    calculateFactorial(3){

                      return 3 * calculateFacotrial(3-1);

                    }===========
                               ||
                               ||
                               ||           
                               \/
                             calculateFactorial(2){

                                      return 2 * calculateFacotrial(2-1);

                                      }===========
                                                 ||
                                                 ||
                                                 ||           
                                                 \/
                                             calculateFactorial(1){
                                                     if(n<=1){ //Base condtion is met so function call will return from here
                                                      return 1;
                                                     }
                                                      return 1 * calculateFacotrial(1-1);//This line will not execute because we already met with base condtion
                                               }

```

This is how function call will work in recursion .<br>
Now lets understand this with just values and no syntax for better readability and understanding of what exactly are the function calls doing .


```

Flow of execution : top to bottom then from last line go to right side then go bottom to top.



               And now the calculated value will 5*24 = 120 
 5 * (5-1)  /-----------------------------------------------||returned value i.e. 24 will be recieved by (4-1) call
        ||  \-----------------------------------------------||
        ||                                                  ||
        ||                                                  ||
        ||                                                  ||
        ||                                                  ||
        ||                                                  ||
        \/          And now the calculated value will 4*6 = 24
        4*(4-1) /-----------------------------------------------||returned value i.e. 6 will be recieved by (4-1) call
            ||  \-----------------------------------------------||
            ||                                                  ||
            ||                                                  ||
            ||                                                  ||
            ||                                                  ||
            \/           And now the calculated value will 3*2 = 6
            3*(3-1)  /-------------------------------------------------||returned value i.e. 2 will be recieved by (3-1) call
                ||   \-------------------------------------------------||
                ||                                                     ||
                ||                                                     ||
                ||                                                     ||
                ||                                                     ||
                \/         And now the calculated value will 2*1 = 2
                2*(2-1) /----------------------------------------------------------||returned value i.e 1 will be recieved by (2-1) call
                    ||  \----------------------------------------------------------||
                    ||                                                             ||
                    ||                                                             ||
                    ||                                                             ||
                    1 //base condition met now this function right now will return 1

```
