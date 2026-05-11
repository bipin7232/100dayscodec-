#include <iostream>
using namespace std;

int main(){
    int marks     []={1,2,3,5,6,7};
    int size = 6;

    int largest = INT8_MIN;

    for(int i = 0; i<size; i++){
       largest = max(marks[i], largest);

        }

        
  

    cout<<marks<<endl;

    return 0;
  }