#include <iostream>
using namespace std;

int sumOfArray(int a[], int b){
    int sum = 0;
    for(int i = 0; i<b; i++){
        sum = sum +a[i];

    }
    return sum;
}

int productOfArray(int a[], int b){
    int product = 1;
    for(int i =0; i<b; i++){
        product = product *a[i];
    }

    return product;


}

int main(){

    int arr[] = {1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(int);

  
    cout<<  sumOfArray(arr,sz)<<endl;

    cout<<productOfArray(arr,sz)<<" ";

    return 0;

}