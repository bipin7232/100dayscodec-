#include <iostream>

using namespace std;

int main(){
    int arr[] = {5,4,1,2,1,2,3,3,};

    int size = sizeof(arr)/sizeof(int);

  

    for(int i =0; i<size; i++){
        bool duplicate = false;


        for(int j= 0; j<i; j++){
            if(arr[i] == arr[j]){
                duplicate = true;
                break;
                

            }
        }


    if(!duplicate){
        cout<<arr[i]<<" ";
        }
    }

   

    return 0;

}