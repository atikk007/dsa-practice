#include <iostream>
using namespace std;

int main() {

    int a = 1, b = 2;

    if (a-- > 0 && ++b > 2) {
        cout << "Inside if, a = " << a << " b = " << b << endl;
    }
    else {
        cout << "Inside else";
    }

    cout << (25 * (++b)) << endl;

    int p = 1, q = p++, r = ++p;

    cout << q << " " << r;

    //	cout<<

    return 0;
}