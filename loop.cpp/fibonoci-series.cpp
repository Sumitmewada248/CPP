//write a programe to display fibonacci series for N terms;
#include<iostream>
using namespace std;

int main(){
   int n,n1=0,n2=1,n3;
   cout<<"enter the range: ";
   cin>>n;
   cout<<n1<<" "<<n2<<" ";
   for (int i =1; i<=n-2; i++)
   {
    n3=n1+n2;
    if(n3%5!=0)
         cout<<n3<<" ";
    n1=n2;
    n2=n3;

   } 

}