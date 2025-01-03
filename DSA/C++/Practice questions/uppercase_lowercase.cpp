//Checking wether the entered charcater is uppercase or lowercase
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter character: ";
    char ch;
    cin>>ch;

    if(ch>='a'&&ch<='z'){
        cout<<"lower case";
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"UPPER CASE";
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"its a digit, STUPID!";
    }
    else{
        cout<<"Special Character";
    }
    return 0;
}