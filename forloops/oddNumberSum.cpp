#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numeber: ";
    cin>>n;
    int i =1;
    int sum = 0;

   
    for(i=1; i<=n; i++){
        if(i % 2!=0){
             sum +=i;
             cout<<i<<"+" ;

        }
       


    }
   
  
   cout << sum;
  

   
    
 
    return 0;
}
