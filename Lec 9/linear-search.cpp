#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}
int main() {

    int size = 10;
    int arr[size] = { 3,5,6,7,9,1,4,8,0,9 };
    int key;

    cout << "Enter the element to search for : ";
    cin >> key;

    // whether key is present in it or not
    bool found = search(arr, size, key);

    if (found)
        cout << "key is present";
    else
        cout << "key is not present";

    return 0;
}