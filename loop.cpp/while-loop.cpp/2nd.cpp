#include<iostream>
using namespace std;
int main(){

 int num,lastdigit,count=0;

    cout<<"enter the number :";
    cin>>num;

    while(num>0){
        lastdigit=num%10;
        num=num/10;
        count++;
    }
    cout<<lastdigit;

}

