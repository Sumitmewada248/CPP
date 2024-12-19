#include<iostream>
using namespace std;
int main(){
    //main -->1 statemenet;
    //outer loop---> 2statement;
    //inner loop--> 1staement;



//write a progerame to draw a pramide;
/*int star=1;
for(int i=5;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<" ";
    }
    for(int k=1;k<=star;k++){
        cout<<"*";
    }
    cout<<endl;
    star=star+2;
}



}*/
int star=1;
for(int i=5;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<" ";
    }
    for(int k=1;k<=star;k++){
        if(k==1||k==star||i==1||){
        cout<<"*";
        }
        else{
            cout<<" ";
        }
    }

    cout<<endl;

    star=star+2;
}



}

