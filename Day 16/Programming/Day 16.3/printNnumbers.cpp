#include <iostream>
using namespace std;

int main(){
    int n ;
    int i =1;
    cout<<"Enter the value "<<endl;
    cin>>n;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
    cout<<endl; //For new line
    
    //Same program in for loop
    for(int j =1; j<=n; j++){
        cout<<j<<" ";
    }
    
return 0;
}