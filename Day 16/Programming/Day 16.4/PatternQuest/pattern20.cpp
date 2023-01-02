#include <iostream>
using namespace std;

int main(){
    int i =1;
    
    while(i<=4){
        int space =1;
        while(space<=4-i){
            cout<<"  ";
            space++;
        }
        int star =1;
        while(star<=i){
            cout<<"* ";
            star++;
        }
        i++;
        cout<<endl;
    }

return 0;
}
