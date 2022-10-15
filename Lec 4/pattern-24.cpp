#include <iostream>
using namespace std;

int main() {

    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n; j++) {

            if (j <= n + 1 - i) {
                cout << j << " ";
            }
            else if (j > n - 1 + i) {
                cout << 2 * n - j + 1 << " ";
            }
            else {
                cout << "*" << " ";
            }

        }
        cout << endl;
    }

    //	cout<<

    return 0;
}