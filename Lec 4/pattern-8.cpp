#include<iostream>
using namespace std;

int main() {

    int n=3;
    char letter = 'A';

    cout<<"Enter the limit : "<<n<<endl;

    for(int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout<<letter<<" ";
        }
        letter++;
        cout<<endl;
    }
    return 0;
}