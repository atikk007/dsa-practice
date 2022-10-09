#include <iostream>
using namespace std;

int main(){

    int n, count=0;
    cout<<"Enter the number of rows : ";
    cin>>n;

    for(int row = 1; row<=n; row++) {
        count = row;
        for (int col = 1; col<=row; ++col) {
                cout<<count--<<" ";

        }
        cout<<endl;
    }

    return 0; 
}