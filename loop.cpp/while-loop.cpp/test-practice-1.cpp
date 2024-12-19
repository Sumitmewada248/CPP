#include<iostream>
#include<cmath>
using namespace std;
int main(){

  /*  //Power of number;

    int num1,num2,power;
    cout<<"enter num1 and num2 :";
    cin>>num1>>num2;

    power=pow(num1,num2);
    cout<<power;


    int num,digit,n1,n2;
    cout<<"enter the number : ";
    cin>>n1>>n2;


    while(num>0){
        digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
  cout<<reverse;

  for(int i=2;i<=num/2;i++){
    if(num%i==0){
            cout<<i<<endl;
    yes=false;


    }

  }
  if(yes==true){
    cout<<"yes prime";
  }
  else{
    cout<<"not prime";
  }*/

int num,lastdigit,sum=0,temp,n=0,num2;
cout<<"enter the number";
cin>>num;
temp=num;
while(num!=0){
    num/=10;
    n++;
}
num=temp;

while(num>0){
    lastdigit=num%10;
    sum=sum+pow(lastdigit,n);
    num/=10;

    cout<<sum<<"====";
}


if(temp==sum){
    cout<<"yes its armstrong ";
}
else{
    cout<<"not armstrong";
}
}
/*




int num ,factorial=1;
cout<<"enter the number :";
cin>>num;

for(int i=1;i<=num;i++){
factorial=factorial*i;
cout<<i<<endl;
}
cout<<factorial;

}
int num,lastnum,product=1;
cout<<"enter the num :";
cin>>num;
while(num>0){
    lastnum=num%10;
    product=product*lastnum;

    num=num/10;
    cout<<lastnum<<endl;

}
 cout<<product;

}

int num,n1=0,n2=1,n3;
cout<<"enter range";
cin>>num;

cout<<n1<<" "<<n2<<" ";

for(int i=1;i<=num-2;i++){
    n3=n2+n1;
     cout<<n3<<" ";
    n1=n2;
    n2=n3;

}




}

int num1,num2,small;
cout<<"enter num1 and num2";
cin>>num1>>num2;
bool hcf=false;

if(num1>num2){
    small=num2;
}
else if(num1<num2){
        small=num1;

}

for(int i=small;i>=2;i--){
    if(num1%i==0 && num2%i==0){
        cout<<i<<endl;
        hcf=true;
        break;
    }


}

if(hcf==false)
    cout<<"no hcf possible";

}




//continue statmenet

for(int i=1;i<=100;i++){
    if(i%10==0){
        continue;
    }
    cout<<i<<" ";}


*/
