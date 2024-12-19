#include<iostream>
using namespace std;
int main(){

   /* //PROFIT LOSS AND LOSS;

int cp,sp ,profit,loss;
cout<<"enter the cp: ";
cin>>cp;

cout<<"enter the sp :";
cin>>sp;

if(sp>cp){
    profit=sp-cp;
    cout<<"profit is :"<<profit;
}
if(sp<cp){
    loss=cp-sp;
    cout<<"loss is :"<<loss;
}
if(sp=cp){
    cout<<"No profit,Not loss";
}

}*/

//WAP to determine whether a number given by a user, is a prime number or not,

int num;
cout<<"enter the number :";
cin>>num;
bool prime=true;

for( int i=2;i<=num/2;i++){
    if(num%i==0){
        cout<<i<<endl;
        prime=false;


    }
}
if(prime==true){
      cout<<"its a prime number";
}
    else{
        cout<<"its not a prime number";
    }
}

//IT CONTAIN 7 OR NOR;

/*
int num ,lastdigit;
cout<<"enter the number :";
cin>>num;
bool yes=false;
    while(num>0){
    lastdigit=num%10;
    num=num/10;


    if(lastdigit==7){
        cout<<lastdigit<<endl<<"yes";
        yes=true;

    }
}
}
/*if(yes==true){
    cout<<"yes it has 7 ";
}
else{
    cout<<"it does't have 7";
}
}*/


//SWITCH CASE;

/*char choice;


cout<<"enter E for even number or enter O for odd number :";
cin>>choice;
char E,O;

switch(choice){
case 'E' :
    for(int i=2;i<=100;i+=2){

     cout<<"all even number "<<i<<endl;

   }
break;

case 'O' :
     for(int i=1;i<=100;i+=2){

     cout<<"all odd number "<<i<<endl;


   }

    }




}


int amount,discount;
cout<<"enter the amount you purchase :";
cin>>amount;

if(amount<=100){
        cout<<"no discount :";


}
if(amount>=101&&amount<=500){
    discount=amount*5.0/100;
    amount-=discount;
    cout<<discount<<endl<<amount;
}
if(amount>=501&&amount<=1000){
    discount=amount*10.0/100;
    amount-=discount;
    cout<<discount<<endl<<amount;
}
if(amount>1000){
    discount=amount*15.0/100;
    amount-=discount;
    cout<<discount<<endl<<amount;
}


}

/*
int num ,n1=0,n2=1,n3;
cout<<"enter the range where you want to print series :";
cin>>num;

cout<<n1<<" "<<n2<<" ";

for(int i=1;i<=num-2;i++){
    n3=n1+n2;
    cout<<n3<<" ";
    n1=n2;
    n2=n3;

    if(n3%5==0){
        cout<<"ignore it"<<endl;
    }
}
}
*/

/*int num,lastdigit,num2,revers=0,temp;

cout<<"enter the number :";
cin>>num;
temp=num;

while(num>0){
    lastdigit=num%10;
    revers=revers*10+lastdigit;
    num/=10;


}
if(temp==revers){
    cout<<"yes it is a palidronm :"<<revers;
}
else{
    cout<<"its not a palidrom :";
}

}*/
