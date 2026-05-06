#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";

    cin>>n;
    int i = 0;
    int sum = 0;

    for(i=0; i<=n; i++){
        sum += i;
        if(i==5)
        {
            break;
        }
    }

    cout<<sum;

    return 0;
}