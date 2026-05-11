#include <iostream>
using namespace std;

int bianrytoDec(int num){
    int ans =0, pow=1;

    while(num>0){
        int rem = num%2;
        ans = ans + (rem*pow);

        num = num/10;
        pow = pow *2;

    }

    return ans;
}


int main(){

    int n = 12;

  

        cout<<bianrytoDec(n);

}