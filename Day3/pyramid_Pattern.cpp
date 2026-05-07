#include <iostream>
using namespace std;

int main(){
    int n=4;

    for(int i= 0; i<n; i++){
        //space

        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //i+1

        for(int k =1; k<=i+1; k++){
            cout<<k;
        }

        // for(int a =i; a>0; a--){
        //     cout<<a;
        // }

   
     

        cout<<"\n";



    }

    return 0;


}