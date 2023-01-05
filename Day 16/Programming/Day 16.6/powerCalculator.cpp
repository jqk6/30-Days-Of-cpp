#include <iostream>
using namespace std;

int calculatePower(int a , int n){

 int ans =1;
    while (n>0)
    {
        int last_bit= (n&1);
        if(last_bit){
            ans = ans * a;
        } 

        a = a*a;
        n=n>>1;
    }
    return ans;
}
int main(){
    int a ;
    cout<<"Enter your base value"<<endl;
    cin>>a;
    int n;
    cout<<"Enter your power value"<<endl;
    cin>>n;
    
    int answer = calculatePower(a,n);
    cout<<a<<" to the power "<<n<<" is "<<answer<<endl;


return 0;
}