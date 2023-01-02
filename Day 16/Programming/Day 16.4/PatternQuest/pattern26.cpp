#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    cout<<"Enter your value"<<endl;
    cin>>n;
    int count =1;
    while(i<=n){
        int space =1;
        while(space< n-i+1){
            cout<<"  ";
            space++;
        }
        int j =1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
return 0;
}
