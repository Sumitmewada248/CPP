  
/// multiple inheritent

#include<iostream>
using namespace std;

class sbi
{
    public:sbi()
    {
    cout<<  "\n sbi Memory allocated \n";
    };
    ~sbi(){
    cout<<"\n sbi memory Deallocate \n";
    };

    public:void sbishow()
    {
        cout<<"\n SBI CLASS \n";
    };
};

class axis
{
    public:axis()
    {
      cout<<  "\n axis Memory allocated \n";
    };
    ~axis(){
    cout<<"\n axis memory Deallocate \n";
    };

    public :void axisshow()
    {
        cout<<"\n AXIS CLASS \n";

    };
};

class customer:public sbi, public axis
{
      public:customer()
    {
      cout<<  "\n customer Memory allocated \n";
    };
    ~customer(){
    cout<<"\n customer memory Deallocate \n";
    };

       public:void show()
    {
        cout<<"\n customer CLASS \n";

    };
};
int main(){
customer c;
c.show();
c.sbishow();
c.axisshow();

}
