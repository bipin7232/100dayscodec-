#include <iostream>
using namespace std;

int main(){

    int n = 10;
    for(int i = 0; i<n; i++){
        if(i!=0){

            for(int j= 0; j<i; j++){
            cout<<" ";
        }

      

        }

    
       

        for(int j= 0; j<n-i; j++){
            cout<<" * ";
        }

        


    
        cout<<"\n";
    } 

    return 0;

}
