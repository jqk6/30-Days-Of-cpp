#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    char c = 'A';
    cout<<"Enter you value "<<endl;
    cin>>n;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<char(c+j-1)<<" ";
            j++;
        }
        c++;
        i++;
        cout<<endl;
    }
return 0;
}
