#include<iostream>
using namespace std;
 
 int main(){
int num1,num2,num3;

cout<<"enter num1 , enter num2 ,  enter num3 ";
cin>>num1>>num2>>num3;

if(num1>=num2 && num1>num3){
    cout<<"max number is num1  "<<num1;
    
}
else if(num2>=num1 && num2>=num3){
    cout<<"num2 is max "<<num2;

}
else{cout<<"num3 is max "<<num3;
}
    
}