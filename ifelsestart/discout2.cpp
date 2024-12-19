#include<iostream>
using namespace std;
int main(){

    int cost;
    cout<<" your cost price ";
    cin>>cost;
     
    double dis;

    if(cost<2000){
        dis=cost*(5.0/100);
        cout<<"discount"<<dis;
    }

    if(cost>2001 && cost<5000){
        dis=cost*(25.0/100);
        cout<<"discount"<<dis<<endl;
    }
    if( cost>5001 && cost<10000){
        dis=cost*(35.0/100);
        cout<<"discount"<<dis;
    }

    if(cost>10001){
        dis=cost*(50.0/100);
        cout<<"discount"<<dis;
    }

  
 }
