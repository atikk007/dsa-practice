#include <iostream>
using namespace std;

int main() {

    int a = 0, b = 1, term = 0;
    cout << a << " " << b << " ";
    for (int i = 2; i <= 10; ++i) {

        term = a + b;
        cout << term << " ";

        a = b;
        b = term;
    }


    return 0;
}