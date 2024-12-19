#include<iostream>
using namespace std;
int main(){



  int num;
  cout<<"entyer number";
  cin>>num;
  bool yes=true;

  for(int i=2;i<=num/2;i++){
    if(num%i==0){
            cout<<i<<endl;
    yes=false;


    }

  }
  if(yes==true){
    cout<<"yes prime";
  }
  else{
    cout<<"not prime";
    }
}


#include<iostream>
using namespace std;
int main(){
int num;
for(int j=2;j<=200;j++){

  num=j;
  bool prime=true;

  for(int i=2;i<=num/2;i++){
    if(num%i==0){
            prime=false;
            }

  }
  if(prime==true){
    cout<<j<<" ";
  }

}
}
