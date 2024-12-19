#include<iostream>
using namespace std;
int main(){

int a=20;
int &b=a;//&its used to give same address ;

a=50;
cout<<a<<endl<<b;


}
