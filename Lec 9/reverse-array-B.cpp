#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {

    int end = size - 1;
    int start = 0;
    while (start <= end) {

        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}
void printArray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }cout << endl;
}

int main() {
    int size = 5;
    int arr[size] = { 10,40,60,88,90 };

    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);



    //	cout<<

    return 0;
}