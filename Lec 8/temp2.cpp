#include <iostream>
using namespace std;

int update(int a) {
    a = a * a;

    return a;
}
int main() {

    int a = 15;
    update(a);

    cout << a << endl;

    return 0;
}