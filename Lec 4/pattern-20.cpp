#include<iostream>
using namespace std;

int main() {
        int n=4;
        int num =1, space;
    for(int i=1; i<=n; i++) {
            space = n-i+1;
        for(int j=1; j<=n; j++) {
            
                if(j>=space)
                    cout<<num;
                else 
                    cout<<" ";
            
        }
        num++;
        cout<<endl;
    }


    return 0;
}