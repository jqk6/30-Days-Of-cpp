#include <iostream>
using namespace std;

int main(){
    
    int a =2;
    int sum =0;
    int n;
    cout<<"Enter the value "<<endl;
    cin>>n;

    while(a<=n){
        sum+=a;
        a+=2;
    }
    cout<<"The output is "<<sum<<endl;

    
return 0;
}