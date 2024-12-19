#include<iostream>
using namespace std;

/*class classname
{

    datatype variable;
    public:datatype functionname (parameter/nonparameter)
    {
        statements/code;
    }
};

int main(){

classname objectname;
objectname.functionname();
}
*/

class atm{
int rs=5000;
public:void show()
{
  cout<<rs;
}
private: void display(){
cout<<"\nwelcome";}



public: void fun(){
cout<<"\nbye"<<endl;
}

public: void table(int a)
{

    for (int i=1;i<=10;i++)
    {

        cout<<a*i<<"\t";
    }
}
};


int main(){


atm sbi;
sbi.show();
atm axis;
axis.fun();
atm p;

int f;
cout<<"enter no";
cin>>f;

p.table(f);

}



