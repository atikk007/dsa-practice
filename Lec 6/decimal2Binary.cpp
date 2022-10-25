#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n = -5;
    int bit = 0, answer = 0;
    int i = 0;

    while (!(n == 0 | n == -1)) {

        bit = (n & 1);
        answer = answer + (round(pow(10, i)) * bit);
        n = n >> 1;
        i++;
    }

    cout << "Binary equivalent is : " << answer;

    return 0;
}