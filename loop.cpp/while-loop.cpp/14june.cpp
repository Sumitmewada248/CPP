#include<iostream>
#include<cmath>
using namespace std;
int main(){
    // int i=20;
    // while(i<100){
    //     cout<<"welcome";

    //     i=i+20;
    // }

//     double n1,n2;
//     string choice="yes";

//     while (choice=="yes")
//     {
        
    
    
//     cout<<"enter 2 numbers ";
//     cin>>n1>>n2;
//     cout<<"addition  "<<n1+n2<<endl; 
//     cout<<"do u want to continoue type 'yes' for proced, otherwishe type any character";
//     cin>>choice;
//     if(choice=="yes"){
//         cout<<"ok you can procedd\n ";

//     }
//     else{
//         cout<<"thank you for using our service ";
//     }
//     }
// }
// write a program to determine wether a number given by the user is a armstrong number or not
//arm strong numbers are 153=1^3^5^3+3^3=153

int num ,sum=0,last,temp,num2,count;
cout<<"enter the number :";
cin>>num;
temp=num;


while(num>0){
    last=num%10;
    sum=sum+last*last*last;
    num=num/10;
}

while(num2>0){
    num2=num2/10;
    count++;
}

if(temp==sum){
    cout<<"it is  a armsrog number :";
}

else{
    cout<<"it is not a armstrong number :";
 }
}



//callclate the sum of individual sum of digits
// int num ,sum=0,last,temp,num2,count;
// cout<<"enter the number :";
// cin>>num;
// temp=num;


// while(num>0){
//     last=num%10;
//     sum=sum+last;
// }
//     cout<<sum;
// }

// if(temp==sum){
//     cout<<"it is  a armsrog number :";
// }


// else{
//     cout<<"it is not a armstrong number :";
// }
// }


// //callclate the sum of individual sum of digits