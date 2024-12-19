#include <iostream>
using namespace std;
int main(){
//int num;
//cout<<"enter the number";
//cin>>num;

//if (num==99){
  //  cout<<"congratulation";






/*
int pin=123,num;
cout<<"enter the pin";
cin>>num;

if(num==123){
    cout<<"widrawl succesful";

}




int length,breadth;

cout<<"enter the length";
cin>>length;

cout<<"enter the breadth";
cin>>breadth;

if(length==breadth){
    cout<<"square";

}
else{
    cout<<"rectangle";
}
}




int num1,num2;

cout<<"enter num1 and num2";
cin>>num1>>num2;

for(int i=num1;i<num2;i++){

    for(int j=i;j=i/2;j++){
        cout<<i;
    }
}
*/



int num,lastdigit,revers=0,temp;

cout<<"enter the number :";
cin>>num;
temp=num;

while(num>0){
    lastdigit=num%10;
    revers=revers*10+lastdigit;
    num/=10;
}

if(temp==revers){
    cout<<"yes it is a palidronm :"<<revers;
}
else{
    cout<<"its not a palidrom :";
}
}






























