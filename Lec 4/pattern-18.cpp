#include<iostream>
using namespace std;

int main() {
        int n=5;
        int star;
    for(int i=1; i<=n; i++) {
            star = n-i+1;
        for(int j=n; j>=1; j--) {
            
            if(j<=star)
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}