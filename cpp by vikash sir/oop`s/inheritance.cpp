
#include<iostream>
using namespace std;

class university
{
    public:void show()
    {


    cout<<"\n Welcome \n";
    }
};

class c1 :public university
{
    public :void msg ()
    {
        cout<<"College1 \n";

    };
};

class c2 :public university
{
    public :void msg ()
    {
        cout<<"College2 \n";

    };
};

int main(){

c1 obj1;
obj1.msg();
obj1.show();
c2 obj2;

obj2.msg();
obj2.show();


}
