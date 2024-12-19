#include<iostream>
using namespace std;
int main(){
    int a,b;
    char symbol;
    cout<<"enter the num a ";
    cin>>a;

    cout<<"enter the num b ";
    cin>>b;

    cout<<"enter the symbol ";
    cin>>symbol;

    switch (symbol)
    {
     
    case '+' :cout<<"addition "<<a+b;
        break;
    
    case '-' :cout<<"subtraction "<<a-b;
        break;
    
    case '*' :cout<<"multiply "<<a*b;
        break;

    case '/' :cout<<"divison "<<a/(float)b;
        break;
    
    
    
    default:cout<<"its invalid data";
        break;
    }
    





}