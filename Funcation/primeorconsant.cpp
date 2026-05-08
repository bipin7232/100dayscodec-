#include <iostream>
using namespace std;

int primeorcon(int n){
    bool isPrime = true;

    for(int i=2; i<=n-i; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
      if(isPrime==true){
        cout<<"Prime";
       
        }
        else{
            cout<<"Not prime";
        }

        return 0;
     
      

}

int main(){

    cout<<primeorcon(10);

    return 0;

}