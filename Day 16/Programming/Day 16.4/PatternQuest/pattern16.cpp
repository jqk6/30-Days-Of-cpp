#include <iostream>
using namespace std;

int main(){
    int i =1;
    char c = 'A';
    while(i<=4){
        int j =1;
        while(j<=4){
            cout<<char(c+j-1)<<" ";
            j++;
        }
        c++;
        i++;
        cout<<endl;
    }

return 0;
}
