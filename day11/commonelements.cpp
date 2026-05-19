#include <iostream>
using namespace std;

int main(){
    int arr1[] = {2,4,6,8};
    int arr2[] = {2,5,6,9};

    int size = sizeof(arr1)/sizeof(int);
     int size2 = sizeof(arr2)/sizeof(int);



    for(int i = 0; i<size; i++){
        for(int j = 0; j<size2; j++){

        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";

        }
    }
}

    return 0;
}