#include <iostream>
using namespace std;

void array(int arr[], int sz){
    int start = 0, end = sz-1;
    while (start<end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    

}

int main(){

    int arr[] = {1,2,7,90,35};
    int sz= 5;
    array(arr, sz);

    for(int i=0; i<sz; i++){
        cout<<arr[i] <<" ";
    }

    cout<<endl;
    return 0;

}