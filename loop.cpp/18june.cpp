//write a programm wether a number pass by user is a prime number or not ;

//the highest factor posibble of a number is its half;
//find the factor of the number;

#include<iostream>
using namespace std;

int main(){
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     bool prime=true;

//     for(int i=2;i<=n/2;i++){
//     if(n%i==0){
//         cout<<i<<endl;
//         prime=false;

//     }
//     }



// }

//only find the prime number 

 int n;
    cout<<"enter the number :";
    cin>>n;
    bool prime=true;

    for(int i=2;i<=n/2;i++){
    if(n%i==0){
        cout<<i<<endl;
        prime=false;

    }
    }

    if(prime==true){
        cout<<"its a prime number :";

    }
    else{
        cout<<"its not a prime number.";
    }


}