#include <iostream>

using namespace std;

int main(){
    char ch;

    cout<<"Enter the cha: ";
    cin>>ch ;

    if(ch >= 'a' && ch<='z'){
        cout<<"smaller character"<<ch<<endl;

    }

    else{
        cout <<"character larger " <<ch<<endl;
    }


    return 0;



}