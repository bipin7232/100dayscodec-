#include <iostream>
using namespace std;

int main() {

    int arr[] = {0,1,0,23,0,5,6};

    int size = sizeof(arr)/sizeof(int);

    int index = 0;

   
    for(int i = 0; i < size; i++) {

        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

   
    while(index < size) {
        arr[index] = 0;
        index++;
    }
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}