#include<iostream>
using namespace std;

int main() {
        int n=5;
        int space, stars;
    for(int i=1; i<=n; i++) {
            space = n-i;
        for(int j=1; j<=n; j++) {

            if(j<=space)
                cout<<" ";
            else 
                cout<<"*";
            
        }
        cout<<endl;
    }


    return 0;
}