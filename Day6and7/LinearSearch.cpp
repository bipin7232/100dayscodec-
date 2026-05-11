#include <iostream>

using namespace std; 
int linersearch(int arr[] , int sz, int target){
    for(int i=0; i<sz; i++){
        if(arr[i]== target){
            return i;
        }
    }

    return -1;


}

int main(){
    int arr[] = {1,4,5,6,7};
    int sz = 5;
    int target = 10;

    cout<<linersearch(arr,sz,target)<<endl;

    return 0;

}