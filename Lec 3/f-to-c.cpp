#include<iostream>
using namespace std;

int main() {

    double cel, far;

    cout<<"Enter the temprature (in fahrenheit) : ";
    cin>>far;

    cel = (far-32)*(5.0/9);
    cout<<"The celsius equivalent of "<<far<<" f is "<<cel<<endl;
    


    return 0;
}