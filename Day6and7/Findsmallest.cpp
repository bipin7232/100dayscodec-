#include <iostream>

using namespace std;

int main(){

    int nums []= {1,4,5,6,-12,-100000};
   


    int size = sizeof(nums)/ sizeof(int);
     int smallest=INT8_MAX;

    
     int largest = INT8_MIN;

    for(int i= 0; i<size; i++){
        smallest = min(nums[i] , smallest);
        /*
        if(nums[i]<smallest){
           smallest = nums[i];
    }
        */ 
    

      


        largest = max(nums[i], largest);
       
      
    }
     cout<<smallest<<endl;
      

  
   

    return 0;
}