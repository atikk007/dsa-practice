#include<iostream>
using namespace std;

int main() {
        int n=4;
        int num, space;
    for(int i=1; i<=n; i++) {
            // space = n-i+1;
            num=i;
        for(int j=1; j<=n; j++) {
            
                if(j>=i)
                    cout<<num++;
                else 
                    cout<<" ";
            
        }
        cout<<endl;
    }


    return 0;
}