#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    cout<<"Enter your value "<<endl;
    cin>>n;
    
    
    while(i<=n){
        int j = 1;
        char ch = char (64+n-i+1);
        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }
    cout<<endl;
    
    //Another way

    int j =1;
    while (j<=n)
    {
        char ch= 'A' + n -j;
        int k =1;
        while(k<=j){
            cout<<ch<<" ";
            ch++;
            k++;
        } 
        j++;
        cout<<endl;
    }
    
return 0;
}
