// Write a program that calculates the discount on a product based on the following criteria:
// •	Purchase amount up to 100: No discount
// •	Purchase amount from 101 to500: 10% discount
// •	Purchase amount from 501 to 1000: 20% discount
// •	Purchase amount above 1000: 30% discount

#include<iostream>
using namespace std;
int main(){
    int amount,purchase;

    cout<<"enter your purchase amount :";
    cin>>amount;
    
    if(amount<=100){
        cout<<"no discount ";
    }
else if(amount>=101 && amount<=500){
     cout<<amount*0.10;

}
else if(amount>=501 && amount<=1000){
    cout<<amount*0.20;

}
else if (amount>1000){
    cout<<amount*0.30;
}
    

}