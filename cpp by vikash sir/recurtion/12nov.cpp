#include<iostream>
using namespace std;



int table (int a, int b){
if(b>10){
    return a;
}
cout<<a<<"*"<<b<<"= "<< a*b<<endl;
table(a,b+1);
cout<<a<<"*"<<b<<"= "<< a*b<<endl;
}

int main(){
cout<<"enter number";
int a;

cin>>a;
table(a,1);


}
