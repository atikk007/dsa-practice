#include <iostream>

using namespace std;

int main() {

    int n = 4;
    for (int i = 1; i <= n; ++i) {
        int k = 1;
        for (int j = 1; j <= 2 * n - 1; ++j) {
            if (j >= n - i + 1 && j <= n + i - 1) {
                if (j >= 4)
                    cout << k--;
                else
                    cout << k++;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

