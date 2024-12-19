#include<iostream>
using namespace std;

class RBI
{

  public:RBI()  {
  cout<<"\n Rbi Memory allocated \n";

  }
  public:void server(){
  cout<<"\n RBI \n";
  }
};

class SBI:public RBI
{

  public:SBI()  {
  cout<<"\n Sbi Memory allocated \n";

  }
  public:void client(){
  cout<<"\n SBI \n";
  }
};

class costumer:public SBI
{

  public:costumer()  {
  cout<<"\n costumer Memory allocated \n";

  }
  public:void msg (){
  cout<<"\n SBI \n";
  }
};



int main(){

    costumer obj2;
    obj2.client();
    obj2.server();
    obj2.msg();


}
