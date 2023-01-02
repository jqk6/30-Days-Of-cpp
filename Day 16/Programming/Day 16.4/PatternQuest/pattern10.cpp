#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    int k =1;
    while(i<=n){
        int j =1;
        while(j<=n){
            cout<<k<<" ";
            k++;
            j++;
        }
        i++;
        cout<<endl;
    }
return 0;
}
