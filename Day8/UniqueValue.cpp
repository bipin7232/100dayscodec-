#include <iostream>

using namespace std;

int main(){

    int arr[] = {1,2,3,4,4,1,5,3,2,4,9};
    int n= sizeof(arr)/sizeof(int); 

    for(int i = 0; i<n; i++){
        int coun = 0;
        
    for(int j =0; j<n; j++){
        if(arr[i] == arr[j]){
            coun++;
        }
    }
       if(coun==1){
        cout<<arr[i]<<" ";
    }

    

    }

    return 0;
}