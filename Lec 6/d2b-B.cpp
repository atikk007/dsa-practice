#include <iostream>
using namespace std;

int main() {

    int n = 5;
    long long int a = 1;
    for (int i = 31; i >= 0; i--) {

        if (n & (a << i))
            cout << "1";
        else
            cout << "0";
    }

    //	cout<<

    return 0;
}