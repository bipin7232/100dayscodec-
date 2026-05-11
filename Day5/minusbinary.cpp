#include <iostream>
#include <bitset>
using namespace std;

int dectobinary(int decdigit){
    int ans = 0, pow=1;

    while(decdigit>0){
        int rem = decdigit%2;
        
        decdigit = decdigit /2;
        ans = ans+(rem*pow);

        pow = pow *10;
    }
     return ans;

    

  bitset<5>binary(ans);
  cout<<binary;
  
 
}

int main(){

    cout<<dectobinary(12);

}