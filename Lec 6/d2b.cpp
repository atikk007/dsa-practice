#include <bits/stdc++.h>
using namespace std;

void print_binary(int n) {

    int result = 0;
    while (!(n == 0 | n == -1)) {

        int bit = n & 1;

        result *= 10;
        result += bit;

        n = n >> 1;
    }

    cout << result << endl;

}
int main() {

    int number = 6;
    // int twosCompliment = ~number + 1;

    print_binary(number);
    // print_binary(twosCompliment);



    return 0;
}