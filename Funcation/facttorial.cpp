#include <iostream>
using namespace std;


int fac(int n){
   int f = 1;
    for(int i =1; i<=n;i++){
        f*=i;
    }

    return f;
}


int main(){

    cout<<fac(5);
  

}