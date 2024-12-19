#include<iostream>
using namespace std;

int main(){

//     Write a  program to determine eligibility for admission to a professional course based on the following criteria:
// Marks in Maths >=65
// Marks in Phy >=55
// Marks in Chem>=50
// Total in all three subject >=190

int math,phy,chem,total;
cout<<"marks in math :";
cout<<"marks in phy  :";
cout<<"marks in chem :";

cin>>math>>phy>>chem;

total=math+phy+chem;
cout<<total<<" is total marks"<<endl;

if(math>=65 && phy>=55 && chem>=50 && total>=190){
    cout<<"yes you are eligiable to admission";
}
else{
    cout<<"you are not eligiable";
}


}