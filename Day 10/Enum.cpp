#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };

    Meal m1 = breakfast;
    Meal m2 = dinner;

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    cout << m1 << endl;
    cout << m2 << endl;

    // Enum example 2
    enum Gender
    {
        Male,
        Female
    };

    // Creating Gender type variable
    Gender gender = Male;

    switch (gender)
    {
    case Male:
        cout << "Gender is Male"<<endl;
        break;
    case Female:
        cout << "Gender is Female"<<endl;
        break;
    default:
        cout << "Value can be Male or Female"<<endl;
    }
    

    // Enum example 3
    enum year
    {
        Jan,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };
    int i;

    // Traversing the year enum
    for (i = Jan; i <= Dec; i++)
        cout << i << " "<<endl;

    return 0;
}




