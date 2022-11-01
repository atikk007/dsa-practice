#include <iostream>
using namespace std;

int main() {

    int arr[10] = { -8,5,6,7,9,1,4,8,0,9 };

    int min = INT32_MAX;
    for (int i = 0; i < 10; i++) {
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Min element in the array is : " << min << endl;

    return 0;
}