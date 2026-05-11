#include <iostream>
using namespace std;

int main(){

    int marks[] = {1,2,3,5,6,23,45};

    int size= sizeof(marks) / sizeof(int) ;

    for(int i = 0; i<size; i++){
        cout<<marks[i] <<endl;
    }

    return 0;
}