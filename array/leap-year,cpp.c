#include<iostream>
using namespace std;

int main(){

int y;
cout<<"enter y";
cin>>y;


if((y%4==0 && y%100!=0) || y%400){
    cout<<"leap year";

}

else{
    cout<<"not";
}




}
