#include<iostream>
using namespace std;
int main(){

  ///write a program to find heighest and second heighest number  in an array;
    int marks[6]={4,91,61,3,12,5};
   /* int n=6;

    int high=a[0];

    for(int i=1;i<n;i++){
            if(a[i]>high){
                high=a[i];
            }

    }
     cout<<high;



     ///smallest number find;


    int a[6]={4,91,61,3,12,5};
    int n=6;

    int small=a[0];

    for(int i=1;i<n;i++){
            if(a[i]<small){
                small=a[i];
            }

    }
     cout<<small;*/


    int high,shigh;

if(marks[0]>marks[1]){
   high=marks[0];
   shigh=marks[1];

   }
    else{
        high=marks[1];
        shigh=marks[0];
    }

    for(int i=2;i<6;i++){
        if(marks[i]>high){
            shigh=high;
            high=marks[i];
        }
    }

cout<<shigh<<endl<<high;

}
