#include<iostream>
#include<cmath>
using namespace std;
// UPPERCASE CHARACTER OR LOWERCASE;
 int main(){
//     char a;
//     cout<<"enter the character :";
//     cin>>a;
//     if(isupper(a)){
//         cout<<"its a uppercase character ";
//     }
//     else if(islower(a)) {
//         cout<<"its a lower case ";
//     }
//     else {
//         cout<<"its not a alphabet ";
//     }
// }


//SQUAREROOT PROGRAME
// double number,squareroot;
// cout<<"enter the number :";

// cin>>number;
// if(squareroot=sqrt(number)){
//     cout<<squareroot;
// }

// else{
//     cout<<"number is invalid ";
// }
//}

//cubeor factorial of any number using switch case

// int number,choice;
// int  factorial=1;

// cout<<"enter the number :";
// cin>>number;

// cout<<"enter cube for 1 or enter 2 for factorial :";
// cin>>choice;

// switch(choice){

// case 1:
// cout<<"cube is :" <<(number*number*number);
// break;

// case 2:
// for(int i=1;i<=number;i++){
//     factorial*=i;
//   cout<<i<<endl;  
// }
// cout<<factorial;

// break;


// default :
//     cout<<"you enter a wrong choice :";

//  }
//  }

 
 //SUM OF FIRST AND LAST DIGIT

//  int number,firstdigit,lastdigit;
//   cout<<"enter the number :";
//   cin>>number;

//   lastdigit=number%10;

//   firstdigit=number;

//   while(firstdigit>=10){
//     firstdigit/=10;
//   }
//   cout<<lastdigit+firstdigit;
 
 //}


 //PRINT ODD OR EVEN OR TBLE USING SWITCH;
 
//  int number,choice;
//  cout<<"enter the number :";
//  cin>>number;

//  cout<<"enter 1 for odd even or enter 2 for table :";
//  cin>>choice;

//  switch(choice){
//   case 1:
//   if(number%2==0){
//   cout<<"number is even :";
//   break;
//   }
  
//   else {
//   cout<<"number is odd :";
// break;

//  }
  
//  case 2:
//  for(int i=1;i<=10;i++){
//   cout<<"table is :"<<number*i <<endl;

//  }

 
//  }
 

//  }

//reverse the number;

 int temp,reverse=0;
 char num;
 temp=num;

//  cout<<"enter the number :";
//  cin>>num;

for(int i=100;i<=300;i++){
 while (num!=0){
  int digit = num%10;
   reverse= reverse*10+digit;
   num/=10;
 }
 if(num==reverse){
 cout<<reverse;
 }
 }
 }