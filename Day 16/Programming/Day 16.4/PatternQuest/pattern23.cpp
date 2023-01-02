#include <iostream>
using namespace std;

int main(){
    int i =1;
    cout<<"Enter your value "<<endl;
    int n ;
    cin>>n;
    while (i<=n)
    {
        int space =1;
        while(space<i){
            cout<<"  ";
            space++;
        }
        int num =1;
        while (num<=n-i+1)
        {
            cout<<i<<" ";
            num++;
        }
        i++;
        cout<<endl;
    }
return 0;
}
