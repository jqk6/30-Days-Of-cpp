**Date :** `15-12-2022`
## Lecture - 8 & 9 Summary

### Lecture - 8 Topic : Constants, Manipulators & Operator Precedence

**Constant** : Constant is helpful when you don't want to let other change your variable value.<br>

```c++
int a =45;
cout<<"The value of a : <<a<<endl;
a =55;
cout<<"The value of a : <<a<<endl;
```
As you can see in the above example the value can be changed easily, to stop that we use constant.

```c++
const int a =45;
cout<<"The value of a : " << a <<endl;
a =43; //This will throw error because we cannot change the value of 'a' here because now 'a' is constant 
```

**Manipulators** : Manipulators in C++ are those operators which help us to format (display format on the screen) our code .<br>
Commonly used two manipulators : `endl` `setw()`<br>
>`setw()` comes from `iomanip` 

Code:
```c++
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int w = 1, x = 22, y = 333, z = 4444;
    cout << "The value of w is :" << setw(4) << w << endl;
    cout << "The value of x is :" << setw(4) << x << endl;
    cout << "The value of y is :" << setw(4) << y << endl;
    cout << "The value of z is :" << setw(4) << z << endl;
    return 0;
}
```

Output:
```
The value of w is :   1
The value of x is :  22
The value of y is : 333
The value of z is :4444
```

Operator precedence is easily available on internet.

<hr>

## Lecture - 9 Topic : Control Structures
In C++ basic control structures are of three types:<br>
1. Sequence Structure
2. Selection Structure
3. Loop Structure
    
### Explaination of each control structure
**1. Flow of Sequence Structure** :<br>
    `Entry -> Perform Action 1 -> Performa Action 2 -> and so on..... -> Exit`

**2. Flow of Selection Structure** :<br>

    Entry ->check conditon--> if true --> perform Action 1 -> Exit
                              ||
                              || if false
                              ||
                              \/
                      perform Action 2 
    
Just like if-else condition.

**3. Flow of Loop Structure** :<br>
    
    Entry -> check condition -> if true =============
             ||           /\                         ||
             ||if false   ||                         ||
             ||           ||Loop                     ||
             \/           ||                         \/ 
           Exit            =================== Perform Action
    



    

