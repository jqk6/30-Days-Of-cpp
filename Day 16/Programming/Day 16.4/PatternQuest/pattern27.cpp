#include <iostream>
using namespace std;

int main(){
    
    int i =1;
    int n;
    cout<<"Enter your value"<<endl;
    cin>>n;
    while(i<=n){
        //Part 1 of this program
        int space = 1;
        while(space<n-i+1){
            cout<<"  ";
            space++;
        }
        int num1 =1;
        while(num1<=i){
            cout<<num1<<" ";
            num1++;
        }
        //Part 2 of this program
        int k =1;
        int num2=i-1;
        while(k<i){
            cout<<num2<<" ";
            num2--;
            k++;
            
        }
        i++;
        cout<<endl;
    }

    
return 0;
}
