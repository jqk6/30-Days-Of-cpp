#include <iostream>
using namespace std;

int main(){
    int i =1;
    char c = 'A';
    int n ;
    cout<<"Enter your value "<<endl;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<c<<" ";
            j++;
        }
        c++;
        i++;
        cout<<endl;
    }

    cout<<endl;
  
    //Another way

    int j =1;
    while(j<=n){
        char ch ='A';
        int k=1;
        while(k<=j){
            cout<<char(ch+j-1)<<" ";
            k++;
        }
        j++;
        cout<<endl;
    }
return 0;
}
