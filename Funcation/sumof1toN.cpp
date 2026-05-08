#include <iostream>
using namespace std;

int cla(int n){
    int sum =0;
    for(int i = 1; i<=n; i++){
        sum = sum+i;
    }
    return sum;
}

int main(){
   cout<< cla(5);

}