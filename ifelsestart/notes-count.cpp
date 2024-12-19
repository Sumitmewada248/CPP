#include<iostream>
using namespace std;

int main(){
    int amount,notes;
    int count=0,total;

    cout<<"enter the amount  ";
    cin>>amount;
   

    if(amount>=2000){    //its also_--_-- if(amount/2000>=1)
        notes=amount/2000;
        amount=amount-notes*2000;
        cout<<"2000*"<<notes<<"= "<<2000*notes<<endl;
        count=count+notes;

    }

    if(amount>=1000){
        notes=amount/1000;
        amount-=notes*1000;
        cout<<"1000*"<<notes<<"="<<1000*notes <<endl;
         count=count+notes;

    }
    if(amount>=500){
        notes=amount/500;
        amount-=notes*500;
        cout<<"500*"<<notes<<"="<<500*notes <<endl;
         count=count+notes;

    }
    if(amount>=200){
        notes=amount/200;
        amount-=notes*200;
        cout<<"200*"<<notes<<"="<<200*notes <<endl;
         count=count+notes;

    }
    if(amount>=100){
        notes=amount/100;
        amount-=notes*100;
        cout<<"100*"<<notes<<"="<<100*notes <<endl;
         count=count+notes;

    }
    if(amount>=50){
        notes=amount/50;
        amount-=notes*500;
        cout<<"50*"<<notes<<"="<<50*notes <<endl;
         count=count+notes;

    }
    if(amount>=20){
        notes=amount/20;
        amount-=notes*20;
        cout<<"20*"<<notes<<"="<<20*notes <<endl;
         count=count+notes;

    }
    if(amount>=10){
        notes=amount/10;
        amount-=notes*10;
        cout<<"10*"<<notes<<"="<<10*notes <<endl;
         count=count+notes;

    }
    if(amount>=5){
        notes=amount/5;
        amount-=notes*5;
        cout<<"5*"<<notes<<"="<<5*notes <<endl;
         count=count+notes;

    }
    if(amount>=2){
        notes=amount/2;
        amount-=notes*2;
        cout<<"2*"<<notes<<"="<<2*notes <<endl;
         count=count+notes;

    }
    if(amount>=1){
        notes=amount/1;
        amount-=notes*1;
        cout<<"1*"<<notes<<"="<<1*notes <<endl;
         count=count+notes;
        

    }

    cout<<"total number of notes ="<<count;
}