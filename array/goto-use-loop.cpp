
#include<iostream>
using namespace std;
int main(){
int a,i=1;
cout<<"eneter the number";
cin>>a;

t:
    cout<<a*i<<"\n";
    i++;
    if(i<=10){
        goto t;
    }
    cout<<"done";

}
