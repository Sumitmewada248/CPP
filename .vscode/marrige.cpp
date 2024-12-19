#include<iostream>
using namespace std;

int main(){

    int age;
    string gender,male,female;


    cout<<"enter your gender  ";
    cin>>gender;

    cout<<"enter your age  ";
    cin>>age;
    
    if(gender=="male" && age>=21){
        cout<<"you are eligiable to marrige";
   
    }
    else if(gender== "female" && age>=18){
    cout<<"you are eligiable to marrige";

    }

    else{
        cout<<"you are not eligiable to marrige";
    }
}