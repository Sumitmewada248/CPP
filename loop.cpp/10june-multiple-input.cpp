//write a programe to determine the highest number and the lowest number among N numbers.
//write a programen to take N input fome user and add all of them.
//(a) and also find sum of all sumeven numbers, sumodd numbers seprately.
//(b) Add all the number between range 40 to 60 and also show their count.

#include<iostream>
using namespace std;

int main(){
    int n ,sum=0,num,sumeven=0,sumodd=0,range=0,count=0;
    cout<<"enter the range :";
    cin>>n;

    for( int i=1;i<=n;i++){
    cout<<"enter the number :";
    cin>>num;
    sum+=num;
    if(sum%2==0){
    sumeven=sumeven+num;}

    else{
        sumodd=num+sumodd;
    }
    if(num>=40 && num<=60){
        range=range+num;
        count++;    }

    }
    
    cout<<"total sum of number is :"<< sum<<endl;
    cout<<"sum of sumeven number are :"<<sumeven<<endl;
    cout<<"sum of sumodd number are :" <<sumodd<<endl;
    cout<<"total sum of range :"<<range<<endl;
    cout<<"total count  :"<<count;

}