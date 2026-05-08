#include <iostream>
using namespace std;

//making faction to calculate the factorial

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

//making funcation to calculate the  n number and r number
int ncr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n/(fact_r*fact_nmr);

}
int main(){

    
//value initialize 
    int n =20, r=5;

    // calling funcation ncr
    cout<<ncr(n,r);

}