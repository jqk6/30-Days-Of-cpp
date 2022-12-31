#include <iostream>
using namespace std;

int main(){
    int n ;
    int i =1;
    cout<<"Enter the value "<<endl;
    cin>>n;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
    
    //Same program in for loop
    for(int j =1; j<=n; j++){
        cout<<j<<endl;
    }
    
return 0;
}