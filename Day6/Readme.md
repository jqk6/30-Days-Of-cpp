## Lecture - 8 Summary
### Topic : Constants, Manipulators & Operator Precedence

**Constant** : This is it what it is name means . Constant is helpful when you don't want to let other change your variable value.<br>
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
