#include <iostream>
using namespace std;

int main(){

    int n=0, flag=1;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=2; i<=n/2;++i) {
        if(n%i==0) {
            flag=0;
            break;
        }
    }

   if(flag==1) {
     cout<<n<<" is a prime number";
   } else {
    cout<<n<<" is not a prime number";
   }

    return 0;
}