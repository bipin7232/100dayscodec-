//using Ascii value
#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter the character: ";
    cin>> ch;

    if(ch>=65 && ch<=90){ // [65-90 "A-Z"] 
        cout<<"Upper case character";
    }

    else{
        cout<<"Lower case character";
    }

    return 0;


}