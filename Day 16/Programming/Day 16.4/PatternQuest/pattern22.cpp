#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cout<<"Enter your value"<<endl;
    cin>>n;
    while (i<=n)
    {
        int star = 1;
        while (star<=n-i+1)
        {
            cout<<"* ";
            star++;
        }
        i++;
        cout<<endl;
        
    }
    
return 0;
}
