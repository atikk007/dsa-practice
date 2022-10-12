#include<iostream>
using namespace std;

int main() {

    int n=3;

    for(int i=1; i<=n; ++i) {
        char start = 'A'+i-1;
        for(int j=1;j<=n; ++j) {
            cout<<start++<<" ";
        }
        cout<<endl;
    }

    return 0;
}