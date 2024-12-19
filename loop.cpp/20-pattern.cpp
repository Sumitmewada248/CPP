#include<iostream>
using namespace std;
int main(){

    //write a program to print table(multipication)from range 15 to 25;

    int n,num2;
    cout<<"enter the number :";
    cin>>n;
    
    cout<<"enter the number :";
    cin>>num2;
    for(int num=n;num<=num2;num++){
    for(int i=1;i<=10;i++){
       cout<<num*i<<" ";
    }
    cout<<endl;
    }

}