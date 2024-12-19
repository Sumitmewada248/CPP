#include<iostream>
using namespace std;
int main(){

    ///factorial
  /*  int num, a=1;
    cout<<"enter the number";
    cin>>num;

    while(num>0)
    {
        a=a*num;
       num--;


    }
    cout<<a;
    */

    ///power of any number

  /* int pow,bas,cont=0,result=1;
    cout<<"enter the power";
    cin>>pow;
    cout<<"enter the base";
    cin>>bas;

    while(cont<pow)
    {
        result*=bas;
        cont++;

    }
    cout<<result;

    */


    ///sq root

    int n,i=1,f=0;
    cout<<"enter number";
    cin>>n;

    while(i<=n/2){
        if(i*i==n)
        {
           f=1;
            break;
        }


        i++;

    }

    if(f==1){
        cout<<i<<endl<<"yes valid";
    }
    else{
        cout<<"not found";
    }













    ///prime or not

  /*  int n,i=2;
    cout<<"enter the number you will check";
    cin>>n;
    bool prime=true;
        while(i<=n/2)
    {

        if(n%i==0){
         //   cout<<i<<endl;
            prime=false;
        }
        i++;


    }
    if(prime==true){
        cout<<"yes it is prime number";
    }
    else{
        cout<<"not prime number";
    }*/





    ///perfect number

   /* int num,sum=0,i=1;
    cout<<"enter any number";
    cin>>num;

    while(num>i)
    {

        if(num%i==0)
            sum=sum+i;
            i++;
            cout<<sum<<endl;
    }
    if(sum==num)
    {
        cout<<"yes it is perfect number";

    }
      else{
        cout<<"not perfect number";
      }

*/

































}
