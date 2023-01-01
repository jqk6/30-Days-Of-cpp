#include <iostream>
using namespace std;

int main(){
    int i =1;
    while(i<=5){
        int j = (5 -i)+1;
        while(j>=1){
            cout<<i<<" ";
            j--;
        }
        i++;
        cout<<endl;

    }

return 0;
}