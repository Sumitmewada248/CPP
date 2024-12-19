#include<iostream>
using namespace std;

int f=1;

/*void sum(int a=9,int b=0,int c=9){
    cout<<"result= "<<a+b+c;

}

int main(){
    sum(10,4);
    sum();

}
void sqr(int a){
cout<<a*a<<"\n";
}


int main(){

int a;
cout<<"enter any number \n";
cin>>a;

sqr(a);


}*/

///Factorial

void fac(int a){
    for(a;a>0;a--){


f=f*a;
    }

}

void display(){
cout<<"result :" <<f;
}


int main(){

int a;
cout<<"enter any number \n";
cin>>a;

fac(a);



display();

}








