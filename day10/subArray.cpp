#include <iostream>

using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    int size = 5;
   
    int maxsum = 0;

    for(int str = 0; str<size; str++){
         int cs = 0;
        for(int end = str; end<size; end++){
            cs += arr[end];
            // for(int i = str; i<=end; i++){
            //        cout<<arr[i];
            // }

            maxsum  = max(cs , maxsum);
             

         
        }
       
      
       
    }

     cout<<maxsum<<" ";

    return 0;
}