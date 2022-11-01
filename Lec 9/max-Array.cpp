#include <iostream>
using namespace std;

int main() {

    int arr[10] = { 3,5,6,7,9,1,4,8,0,9 };

    int max = INT32_MIN;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << "Max element in the array is : " << max << endl;

    return 0;
}