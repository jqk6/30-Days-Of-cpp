#include <iostream>
using namespace std;

int main(){
    enum Meal{breakfast,lunch,dinner};

    Meal m1 = breakfast;
    Meal m2 = dinner;
       
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    cout<<m1<<endl;
    cout<<m2<<endl;
return 0;
}