#include<iostream>
using namespace std;
int main(){
// while loop,is a enter loop;
// write a program to generate the factorial of any number; HW
//wap to generate power
// square root of any number other wishe not squrae root;
//find it given number is prime or not
//find it perfect number or not // first factor of it then add the first all number expect that  number;
// write a program to find it how many digit exist in a enter number;
// count digit
// sum of digits

///FIND LAST NUMBER
/*int num,n=0;
cout<<"eneter the number";
cin>>num;
while(num>0){
    n++;
    num=num/10;

}

cout<<n;
*/

///FIND SUMS OF ALL DIGITS
int num,n=0;
cout<<"eneter the number";
cin>>num;
while(num>0){

    n=n+num%10;
    num=num/10;

}
cout<<n;
}
