/* Time stamp - Lecture 4 30:22*/
#include <iostream>
using namespace std;

int main(){

    int n=3;
       

    for(int i=1; i<=n; i++) {
           
        for(int j=1; j<=n; j++) {
            char ch = 'A'+i+j-2;
            cout<<ch<<" ";
        }
            cout<<endl;
            
    }

    /* i+j-1 = 1 (for i=1, j=1)
       i+j-1+'A'-1 = 1+'A'-1
       i+j-2+'A' = 'A' 
    */
    return 0;
}