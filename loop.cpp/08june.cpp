//write a progrma to find the sum of N natural numbers start from one and also display the given formate 
#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter number n :";
cin>>n;
int sum=0;

for(int i=1;i<=n;i++){
  
    
    cout<<i;
    sum=sum+i;
    
      if(i<n){
    cout<<"+";
    }
    

}
cout<<endl;
cout<<"sum is :"<<sum;




    
}