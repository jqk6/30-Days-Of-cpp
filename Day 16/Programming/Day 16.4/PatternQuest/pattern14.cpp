#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    cout<<"Enter your value"<<endl;
    cin>>n;
    while(i<=n){
        char c = 'A';
        int j =1;
        while(j<=n){
            cout<<c<<" ";
            c++;
            j++;
        }
        i++;
        cout<<endl;
    }
return 0;
}
