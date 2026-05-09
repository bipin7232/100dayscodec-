#include <iostream>
using namespace std;

int Dectobinary(int dec){
    int ans = 0, pow = 1;

    while(dec>0){
        int rem = dec %2;
        dec = dec /2;

        ans= ans +(rem*pow);

        pow = pow*10;
    }

    return ans;
}

int main(){
cout<<Dectobinary(56);

}