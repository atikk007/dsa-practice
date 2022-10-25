#include <iostream>
using namespace std;

bool isEven(int a) {

    if (a & 1) {// if any number is odd then its last binary digit will always be 1. that's why if &1 returns 1 then its an odd number.
        cout << (a & 1) << endl;
        return false;
    }

    return true;

}
int main() {

    int num = 9;

    cout << boolalpha << isEven(num);

    //	cout<<

    return 0;
}