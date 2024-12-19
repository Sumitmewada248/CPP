#include<iostream>
using namespace std;
int main(){
int number1=90,number2=88;
int *ptr1=&number1,*ptr2=&number2;
cout<<"address of number 1: "<<ptr1<<endl;
cout<<"address of number 2: "<<ptr2<<endl;

//ptr2=ptr2+1;
ptr1=ptr1-1;

cout<<"address of number 1: "<<ptr1<<endl;
cout<<"address of number 2: "<<ptr2<<endl;
cout<<"add both "<<*ptr1+*ptr2<<endl;


}