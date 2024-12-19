#include<iostream>
using namespace std;

int main(){

//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.

int year;
double bonous, salary;

string name;

cout<<"enter your name";
cin>>name;
cout<<"your name is :"<<name<<endl;

cout<<"enter your salary and year of experince";
cin>>salary>>year;

if(year>1){
    bonous=salary*(year/100.0);
    cout<<"total bonous :"<<bonous<<endl;
    cout<<"salary :"<<salary+bonous<<endl;

}
else{
    cout<<"you are not eligiable for bonous :"<<salary;
}



}