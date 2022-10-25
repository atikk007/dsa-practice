#include <iostream>
using namespace std;

int main() {

    int a = 5, b = 10;
    char operation;
    cout << "Enter the operation : ";
    cin >> operation;

    switch (operation) {

    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << "Please enter a valid operation" << endl;
    }

    //	cout<<

    return 0;
}