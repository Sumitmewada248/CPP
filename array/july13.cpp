#include<iostream>
using namespace std;

int main(){

///TWO STRING ADDDED

//   string f1="apple";
//   string f2="banana";
//   f1.append(f2);
//   cout<<f1;

///for multipe string add;

//    string f1="apple";
//   string f2="banana";
//   string f3="panana";
//   f1.append(f2.append(f3));
//   cout<<f1;

///ADDING IN any character 

//   string f1="apple";
//   string f2="banana";
//   f1.push_back('r');
//   cout<<f1;

///IT DELETE LAST CHRACTER;

//   string f1="apple";
//   string f2="banana";
//   f1.pop_back();
//   cout<<f1;


/// CAPACITY INCREASE

string f1="";
for(int i=1;i<=20;i++){
    f1.push_back('a');
    cout<<"size :"<<f1.size()<<" "<<" capacity :"<<f1.capacity()<<endl;
}
cout<<f1;

}