#include <iostream>
using namespace std;

int main() {
    /*
        for (int i = 0; i <= 5; i--) {
            cout << i << " ";
            i++;
        }
        Returns infinite zerosssssss
     */
    for (int i = 0; i <= 5; i++) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    for (int i = 0; i <= 30; i += 2) {
        cout << i << " ";

        if (i & 1) {
            continue;
        }

        i++;
    }
    cout << endl;
    for (int i = 0; i <= 30; i += 2) {
        cout << i << " ";

        // if (i & 1) {
        //     continue;
        // }

        i++;
    }

    return 0;
}