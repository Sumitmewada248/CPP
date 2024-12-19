#include<iostream>
using namespace std;
int main(){
    //write a programm to find the sum of first and last digit of a number;

    int num,lastdigit,firstdigit;
    cout<<"enter the number :";
    cin>>num;

    lastdigit=num%10;

    int firstdigt=num; 

    while(firstdigit>=10){
        firstdigit/=10;

    }
    cout<<firstdigit+lastdigit;
    
    }


