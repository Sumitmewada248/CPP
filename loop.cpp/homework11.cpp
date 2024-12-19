#include<iostream>
using namespace std;
/*3>Write a program in C++ to calculate the sum of the series 
(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n). 

n=5
(1*1) + (2*2) + (3*3) + (4*4) + (5*5)=55

int main(){
 int n=5 , sum=0;

 for( int i=1;i<=n;i++){
 sum=sum+i*i;
 cout<<i<<"*"<<i<<"="<< i*i<<endl;
 }
 cout<<"sum of number isn " <<sum;

}

reverse table 
int main(){

int num, n,table=1;

cout<<"enter the number where table you want ";
cin>>num;

for(int i=10;i>=1;i--){

table=num*i;

cout<<table<<endl;
}

}

int main(){
    char i;
    for(i='Z';i>='A';i--)
    cout<<i<<" ";
}
int main(){
   int n=100;
 for(int i=1;i<=n;i++){
    i%2==0;
    cout<<i<<endl;
 }


int main(){
   int n=100;
 for(int i=1;i<=n;i++){
  if( i%2==1)
    cout<<i<<endl;
 }

}
int main(){
    int n ,sum=0;
    for( int i=100;i<=200;i++){
    if(i%9==0)
    sum=sum+i;
    cout<<i<<endl;
    }
    cout<<"sum of all the numbetr"<<sum;
}*/
int main(){
    int n,positive=0,negitve=0, zero=0,sum=0;
    cout<<"enter the number";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(i>0){
    
    positive++;
        }
    if( i<0){
        negitve++;
    }
    else{
        zero++;
    }
    cout<<+positive<<endl;
    cout<<+negitve<<endl;
    cout<<+zero<<endl;

    }
}