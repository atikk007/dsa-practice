// Pre-defined function for max and min...

#include <iostream>
using namespace std;

int getMax(int arr[], int n) {
    int temp = INT32_MIN;

    for (int i = 0; i < n; i++) {

        temp = max(temp, arr[i]);
    }

    return temp;
}

int getMin(int arr[], int n) {

    int temp = INT32_MAX;

    for (int i = 0; i < n; i++) {
        temp = min(temp, arr[i]);
    }

    return temp;
}
int main() {

    int arr[10] = { -3,-5,-7,99,108,345,2345,1,0,99 };

    int size = 10;

    int min = getMin(arr, size);
    int max = getMax(arr, size);

    cout << "Min element is : " << min << endl;
    cout << "Max element is : " << max << endl;
    return 0;
}