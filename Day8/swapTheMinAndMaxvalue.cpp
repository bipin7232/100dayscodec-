#include <iostream>
using namespace std;

int maxmiumValue(int a[], int sz){
    int largest = INT8_MIN;
    for(int i =0; i<sz; i++){
         largest = max(a[i], largest);

    }
    return largest;
    
}

int minimumValue(int a[] ,int sz){
    int smallest = INT8_MAX;


    for(int i= 0; i<sz; i++){
        if(a[i]<smallest){
            smallest = a[i];
        
        }
    }

    return smallest;

}

void swapValue(int a[], int sz){
    int aa = maxmiumValue(a, sz);
    int b = minimumValue(a , sz);

    int swap;
    swap = aa;
    aa = b;
    b= swap;

    cout<<aa<<" "<<b;
    
    

}

int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);

    swapValue(arr, size);

    return 0;


}