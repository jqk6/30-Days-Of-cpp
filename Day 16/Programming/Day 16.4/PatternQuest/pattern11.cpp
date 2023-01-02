#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    cout<<"Enter the value "<<endl;
    cin>>n;
    int count=1;
    while(i<=n){
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
