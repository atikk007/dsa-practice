#include <bits/stdc++.h>
using namespace std;

int main() {

    int decimal = -5, i = 0, ans = 0;

    int n = abs(decimal);

    while (n != 0) {

        int bit = (n & 1);
        ans = ans + (round(pow(10, i)) * bit);

        n = n >> 1;
        i++;
    }
    cout << ans << endl;
    int what = ans & 1;
    what = what + 1;
    cout << what << endl;




    return 0;
}