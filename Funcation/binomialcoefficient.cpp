#include <iostream>
using namespace std;

int bin(int a, int b){

    int fac = 1;
    int r = 1;
    int c = a -b;
    int fac2= 1;
    int total = 0;

    for(int i =1; i<=a; i++){
        fac = fac*i;
    }

     for(int i =1; i<=b; i++){
        r = r*i;
    }

    for(int i =1; i<=c; i++){
        fac2= fac2*i;
    }

    total = fac/(r*fac2);
return total;

}

int main(){

    cout<<bin(15,2);


    return 0;
  

}