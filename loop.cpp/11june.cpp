// .5>print all  numbers which is a multiple of 5 or 7 , between 1 to 100.
// 5,7,10,14,15,20,21.............100
/* Q.1>WAP to take input n from the user.

if n is positive,display A to Z characters
                         (ascending order)
if n is negative,display z to a  characters
                         (descending order)
if n is zero,display all vowels
                         (a,e,i,o,u)*/

#include<iostream>
using namespace std;

int main(){
    // int num=100;

    // for ( int i=5; i<=num;i++){
    
    
    //     if(i%5==0 || i%7==0)
    //     cout<<i<<endl;
    // }

    int n;
    cout<<"enter the number  ";
    cin>>n;

    if(n>0){
    for(char i='A'; i<='Z';i++){
        cout<<i<<" ";
    }
    }

    if(n<0){
        for(char i='z';i>='a';i--){
            cout<<i<<" ";
        } 
    }

    if(n==0){
        cout<<"a,e,i,o,u. "<<" ";
    }

}