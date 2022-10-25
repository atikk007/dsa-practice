#include <iostream>
using namespace std;

int fib(int a, int b, int n) {
    int result = 0, temp = 0;

    if (n == 0 || n == 1)
        return 1;

    for (int i = 2; i <= n; i++) {

        result = a + b;

        temp = b;
        b = result;
        a = temp;

    }

    return result;
}

int main() {

    int a = 0, b = 1;
    int n;
    cout << "Enter the term that you want to look up in fibonacci series : ";
    cin >> n;

    cout << n << "th term of fibbonaci series is : " << fib(a, b, n) << endl;

    return 0;
}