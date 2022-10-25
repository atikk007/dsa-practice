/* 231. Power of Two

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x. */

#include <iostream>
using namespace std;

bool isPowerofTwo(int n) {
    int ans = 1;

    for (int i = 0; i <= 30; ++i) {

        if (n == ans) {
            return true;
        }

        if (ans < INT32_MAX / 2)
            ans *= 2;
    }

    return false;
}
int main() {
    cout << boolalpha;
    cout << isPowerofTwo(129);



    return 0;
}