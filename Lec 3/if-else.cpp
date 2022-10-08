#include <iostream>
using namespace std;

int main(){

    char n;
    cout<<"Enter any character of your choice : ";
    cin>>n;

    if(n>='a' && n<='z') {
        cout<<n<<" is a lowercase character"<<endl;
    }else if(n>='A' && n<='Z') {
        cout<<n<<" is an uppercase character"<<endl;
    }else if(n>='0' && n<='9') {
        cout<<n<<" is a number"<<endl;
    }

    

    return 0;
}