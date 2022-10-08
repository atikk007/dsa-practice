#include <iostream>
using namespace std;

int main(){

    double cel, far;

    cout<<"Enter the temprature (in Celsius) : ";
    cin>>cel;

    far = (cel*(9.0/5))+32;
    cout<<"The fahrenheit equivalent of "<<cel<<" C is "<<far;



    return 0;
}