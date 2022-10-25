#include <iostream>
using namespace std;

int setbit(int a, int b) {

    int count = 0;
    while ((a != 0 || b != 0)) {
        if ((a & 1) == 1) {
            count++;
            // cout << count;
        }
        if ((b & 1) == 1) {
            count++;
            // cout << count;
        }
        a = a >> 1;
        b = b >> 1;
    }

    return count;
}
int main() {

    int a = 9, b = 0;

    cout << setbit(a, b);

    return 0;
}