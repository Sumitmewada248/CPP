#include<iostream>
using namespace std;
int main()
{
//write  a programe to create a calculator using do while loop;
int n1,n2;
char ch;
    do
    {
        cout<<"enter the symbole \n + for addition \n - for subtract \n* for multiply \n / for division \n e for exit \n Enter your Choice ";
        cin>>ch;
        if(ch=='+' || ch=='-' ||ch=='*'||ch=='/'){
            cout<<"enter n1 and n2";
            cin>>n1>>n2;
        }
        switch(ch){
         case '+' : cout<<n1+n2<<endl;
         break;
         case '-' : cout<<n1-n2<<endl;
         break;
         case '*' : cout<<n1*n2<<endl;
         break;
         case '/' : cout<<n1/n2<<endl;
         break;
         case 'e' : cout<<"thank you"<<endl;
         break;
         default: cout<<"invalid input";
         }

    }
    while(ch!='e');




}
