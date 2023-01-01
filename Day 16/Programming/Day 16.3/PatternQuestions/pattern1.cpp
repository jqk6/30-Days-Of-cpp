#include <iostream>
using namespace std;

int main(){
    
    int i =1;
    while(i<=5){
        int j =1;
        while(j<=5){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
//Each row have 5 columns
//So each row will execute '*' 5 time
//When we print one row after that we will add new line
//And keep repeat the 2nd and 3rd step again and agian until we reach to row number 5
return 0;
}