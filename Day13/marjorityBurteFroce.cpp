#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,2,1,2,1,1};
    int n = 6;

    for(int val: arr){
        int freq = 0;

        for(int el: arr){
            if(el== val){
                freq ++;
            }
        }

        if(freq>n/2){
            cout<< val;
        }
    }

    return 0;
    
}