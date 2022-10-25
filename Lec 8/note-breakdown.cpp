#include <iostream>
using namespace std;

int main() {

    int n = 1330;

    switch (1)
    {
    case 1: {
        int hun = n / 100;

        cout << "100 rupees notes needed are : " << hun << endl;

        n = n - (hun * 100);
    }
    case 2: {
        int fifty = n / 50;

        cout << "50 rupees notes needed are : " << fifty << endl;

        n = n - (fifty * 50);
    }
    case 3: {
        int twenty = n / 20;

        cout << "20 rupees notes needed are : " << n / 100 << endl;

        n = n - (twenty * 20);
    }
    case 4: {

        cout << "1 rupees notes needed are : " << n << endl;
        break;
    }

    default:
        cout << "Enter a valid amount" << endl;
        break;
    }

    return 0;
}