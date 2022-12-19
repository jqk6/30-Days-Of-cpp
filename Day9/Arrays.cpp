#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {25, 30, 45, 55, 66};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;


    //We can also define values inside array in this way 
    int num[4];
    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;

    cout<<num[0]<<endl;
    cout<<num[1]<<endl;
    cout<<num[2]<<endl;
    cout<<num[3]<<endl;

    //Priting array values with the help of loop

    for (int i = 0; i < 4; i++)
    {
        cout<<num[i]<<endl;
    }
    
    //Prining array values by using while loop
    int i =0;
    while(i<4){
        cout<<num[i]<<endl;
        i++;
    }
    //Prining array values by using do-while loop

    int j  = 0;
    do
    {
        cout<<num[j]<<endl;
        j++;
    } while (j<4);
    
    return 0;
}