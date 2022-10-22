#include <bits/stdc++.h>
using namespace std;

int main() {

    int binary = 101;
    int  i = 0;
    int result = 0;


    while (binary != 0) {

        int digit = binary % 10;
        result = result + round(pow(2, i) * digit);

        binary = binary / 10;
        i++;
    }

    cout << result;

    return 0;
}