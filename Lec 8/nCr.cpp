/* nCr = n!/ r! (n-r)! */

#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (n; n >= 1; n--) {
        result = result * n;
    }
    // cout << result << endl;
    return result;
}
int main() {

    int n = 5, r = 3;

    int result = factorial(n) / (factorial(r) * factorial(n - r));

    cout << result;

    return 0;
}