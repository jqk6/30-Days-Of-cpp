**Date :** `21-12-2022`
## Lecture - 16 Summary
### Topic : Call by Value & Call by Reference in C++


Let's start by a code example :
```c++
#include <iostream>
using namespace std;
//In this example we will see call by refernece and call by value difference
void swap(int,int); //function prototype

int main(){
    int a =4,b=5;
    cout<<"The value of a "<<a<<" and the value of b is "<<b<<endl;
    swap(a,b);
    cout<<"The value of a "<<a<<" and the value of b is "<<b<<endl;

return 0;
}
void swap(int a , int b){// temp   a    b
    int temp =a;         // 4      4    5
    a = b;               // 4      5    5
    b = temp;            // 4      5    4
}
```
**Predict the output ?**<br>

<img src ="/media/gifs/think2.gif" width ="250" height ="200">

**Is this the Ouput you thinked about ?**
```
The value of a 4 and the value of b is 5
The value of a 5 and the value of b is 4
```

<img src ="/media/gifs/yes.gif" width ="200" height ="200">
    
**If yes then you are wrong buddy.**

<img src ="/media/gifs/disappoint.gif" width ="220" height ="200">

**Yeah as a beginner this was my reaction too.**<br>
**But this is the fun part of journey right? You encounter with new things and these new things upgrade your knowlege.**

<img src ="/media/gifs/JimmyYes.gif" width ="220" height ="200">

<br>

**So what's the correct ouput ?**<br>
**Here you go :**
```
The value of a 4 and the value of b is 5
The value of a 4 and the value of b is 5
```
