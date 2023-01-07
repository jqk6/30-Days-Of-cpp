#include <iostream>
using namespace std;

// You have Rs.1330 now you need to calculate how many notes you have
// Possible notes : Rs.100 , Rs.50, Rs.20, Rs.10
// Given amount , you need to calculate how many notes of 100s,50s,20s & 10s are present 
// Solve this question using switch.
// Constraint : The amount need to be multiple of 10

int main(){
    
    int amount = 70;
    int n = amount;
    switch(1){
        case 1 : cout<<"Number of 100s notes present in "<<amount<<" is "<<(amount/100)<<endl;
               n = n%100;
        case 2 : cout<<"Number of 50s notes present in "<<amount<<" is "<<(n/50)<<endl;
               n = n%50;
        case 3 : cout<<"Number of 20s notes present in "<<amount<<" is "<<(n/20)<<endl;
               n = n%20;
        case 4 : cout<<"Number of 10s notes present in "<<amount<<" is "<<(n/10)<<endl;

    }

    // Instead of writing case 2 , 3 and 4 you can directly put all those code inside case 1 too.
return 0;
}
