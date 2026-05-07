#include <iostream>
using namespace std;

int main() {
    int n = 10;

    for(int i = 1; i <= n; i++) {

         for(int k = 1; k <= i; k++) {
            cout << "*";
        }


        // spaces
        for(int j = 1; j <=2*(n- i) ; j++) {
            cout << " ";
        }

        // stars
        for(int k = 1; k <= i; k++) {
            cout << "*";
        }

        cout << endl;
    }

    for(int i =0; i<n; i++){

        for(int j=0; j<n-i; j++){
            cout<<"*";
        }

        if(i!=0){
            for(int m= 2; m<4/2+(i*2); m++){
                cout<<" ";
            }
        }

      

        for(int m = 0; m<n-i; m++){
            cout<<"*";
        }

    cout << endl; 
    }

    return 0;
}