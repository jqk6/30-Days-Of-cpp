#include <iostream>
using namespace std;

int main(){
    cout<<"Enter your value "<<endl;
    int n;
    cin>>n;
    int ans =0;
    int k =1;
    while(n!=0){
        ans =((n%2)*k)+(ans);
        n = n/2;
        k =k*10;
    }
    cout<<ans<<endl;
    //There is another way using bitwise operator see convertDecimalToBinary2.cpp 
return 0;
}