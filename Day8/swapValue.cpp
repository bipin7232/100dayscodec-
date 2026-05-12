#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int b = 6;

    int c; 

    c = a;
    a = b;
    b =c;

    cout<<a;

    return 0;
}