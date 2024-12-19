#include<iostream>
using namespace std;
 
 int main(){
     int w_c;
     cout<<"enter your water conservation bill ";
     cin>>w_c;

     if(w_c>45 && w_c<=75)
     cout<<"you have to pay 475";

     if(w_c>75 && w_c<=125)
     cout<<"you have to pay 750";

     if(w_c>125 && w_c<=200)
     cout<<"you have to pay 1225";

     if(w_c>200 && w_c<=350)
     cout<<"you have to pay 1650";

     if(w_c>350)
     cout<<"you have to pay 2000";

     else{
        cout<<"you don't pay any amount";
     }




 }  