#include <iostream>
using namespace std;

int main(){
    int i =1;
    int n;
    cout<<"Enter your value "<<endl;
    cin>>n;
    while(i<=n){
        int j = (n -i)+1;
        while(j>=1){
            cout<<i<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }

return 0;
}
