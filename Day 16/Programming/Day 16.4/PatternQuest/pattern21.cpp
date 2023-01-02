#include <iostream>
using namespace std;

int main(){
    int i =1;
    cout<<"Enter your value"<<endl;
    int n;
    cin>>n;
    while(i<=n){
        int space =1;
        while(space<=n-i){
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
