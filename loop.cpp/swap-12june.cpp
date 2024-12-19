#include<iostream>
using namespace std;

int main(){
    //write a program to swap the value of two variable with each other

    int num1, num2 ,temp;
    cout<<"num1 is then : ";
    cin>>num1;

    cout<<"num2 is then : ";
    cin>>num2;
    // temp=num1;
    // num1=num2;
    // num2=temp;
  //  another way  of swaping

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    cout<<"num1 is now  : " <<num1<<endl;
    cout<<"num2 is now  : " <<num2<<endl;


}