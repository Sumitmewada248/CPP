#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;

cout<<"enter num1 , enter num2 ,  enter num3 ";
cin>>num1>>num2>>num3;

if(num1>num2 && num1>num3){
    cout<<"num1 is minimum number :"<<num1;
    if(num2>num3){
        cout<<"num2 is second minimum "<<num2;
    }
    else{
        cout<<"num3 is second smallest"<<num3;
    }

}
if(num2>num1 && num2>num3)

cout<<"num1 is minimum  "<<num2;

if(num1>num3){
    cout<<"num1 is second smallest"<<num1;

}
else{
    cout<<"num3 is second smallest";
}
if(num3>num2 && num3>num1)

cout<<"num2 is minimum"<<num3;
if(num2>num1){

    cout<<"num2 is second minimum"<<num2;
}
else{
    cout<<"num1 is second smallest"<<num1;


}




}