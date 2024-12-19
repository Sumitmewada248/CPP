#include<iostream>
using namespace std;
int main(){
    int num,lastdigit;
    cout<<"engter num ";
    cin>>num;
    while(num>0){
        lastdigit=num%10;
        num/=10;
    
        if(lastdigit%7==0){
            cout<<"yes it hAs 7 ";
        break;
        }
        else{
            cout<<"does not have 7 ";
            break;
        }
    }
}