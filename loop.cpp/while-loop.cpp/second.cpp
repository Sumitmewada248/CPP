#include<iostream>
using namespace std;
int main(){

 int num,lastdigit,num2=0;

    cout<<"enter the number :";
    cin>>num;

    while(num>0){
        lastdigit=num%10;
        num=num/10;
        num2++;
    }
    cout<<num2;

}

