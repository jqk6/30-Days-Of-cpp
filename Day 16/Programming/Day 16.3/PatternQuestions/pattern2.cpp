#include <iostream>
using namespace std;

int main(){
    int i=1;
    int n ;
    cout<<"Enter your value for printing pattern "<<endl;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;
    }
return 0;
}