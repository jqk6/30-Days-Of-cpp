## Lecture - 11 Summary
### Topic : Break & Continue Statements

**`break` keyword use :**

```c++
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        cout <<"The value of i is : "<< i << endl;  
    }

    return 0;
}
```

**Output:**
```
The value of i is : 1
The value of i is : 2
```
`break` keyword is used to stop the loop at a certain condition defined by us. 

