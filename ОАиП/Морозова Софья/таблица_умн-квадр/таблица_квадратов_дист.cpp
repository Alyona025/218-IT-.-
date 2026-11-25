#include <iostream>
using namespace std;

int main() {
    cout << "\t"; 
    for(int j=0; j<=9; j++) {
        cout << j << "\t";
    }
    cout << "\n";
    

   
    for(int i=1; i<=9; i++) {
       
        cout << i << "\t"; 
        
        
        for(int j=0; j<=9; j++) {
            cout << (i * 10 + j) * (i * 10 + j) << "\t";
        }
        cout << "\n";
    }
    return 0;
}



 

