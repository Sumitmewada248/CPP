//write a programm to find the number of students who had feilt in am examination;

//  if(marks[i]<40){
    //cout<<"failed students :"<<i<<"marks: "<<marks[i]<<endl;

#include<iostream>
using namespace std;

int main(){
int marks[8]{37,44,5,67,87,36,23,39};
int n=8;
for (int i=0;i<n;i++){
    cout<<marks[i]<<" ";

}
cout<<endl;
for(int i=0;i<n;i++){
  if(marks[i]>=35 && marks[i]<40){  //give add marks in the numbers;
      cout<<"grace number given to the :"<<i<<"students :"<<40-marks[i]<<endl; //find how many marks are added;
    marks[i]=40;
  }
    }

 for(int i=0;i<n;i++){
cout<<marks[i]<<" ";



}
}

