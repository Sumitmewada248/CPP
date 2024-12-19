// Write a program that accepts marks (out of 100) of five subjects from user and calculate the sum then calculate percentage? Display message according to following condition:
// percentage >=60 Grade A
// percentage >=50 Grade B
// percentage >=40 Grade C
// percentage  <40 Grade D

#include<iostream>
using namespace std;

int main(){
    int math,phy,chem,bio,eng,percentage;
    cout<<"enter the marrks of math "<<endl;
    cin>>math;
    cout<<"enter the marrks of phy "<<endl;
    cin>>phy;
    cout<<"enter the marrks of chem "<<endl;
    cin>>chem;
    cout<<"enter the marrks of bio "<<endl;
    cin>>bio;
    cout<<"enter the marrks of eng "<<endl;
    cin>>eng;


  
    percentage=(math+phy+chem+bio+eng)/500.0*100;
    cout<<percentage<<"percent"<<endl;

    if(percentage>=60){
        cout<<"grade A";
    }
    else if(percentage>=50){
        cout<<"grade B";
    }
    else if(percentage>=40){
        cout<<"grade C";
    }
    else if(percentage<40){
        cout<<"grade D";
    }
    
    

     

}
 