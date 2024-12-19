//we can use function inside the class in two ways

//1 function declare and define inside a class.
//1 function declare in a class but define outside of class.**


/*#include <iostream>
using namespace std;

class cybrom
{
    int a,b;
    public:void sum(int x,int y);
    int cube(int a);
};

void cybrom::sum(int x,int y){
cout<<x+y<<"\n";
}
int cybrom::cube (int a)
{
    cout<<a*a*a<<endl;
}


int main(){
cybrom c;
c.sum(5,25),
c.cube(5);
}
*/

/// function over loading in function
///if a class having more than one function  with diffrent parameter  but function name are same is called function over loading






#include <iostream>
using namespace std;

class cybrom
{
    int a,b;
    public:void sum(int x,int y);
    void sum(int a,int b,int c);
};

void cybrom::sum(int x,int y){
cout<<x+y<<"\n";
}
void cybrom::sum (int a,int b,int c)
{
    cout<<a+b+c<<endl;
}


int main(){
cybrom c;
c.sum(5,25);
c.sum(5,58,2);
}


///Static function

// static function is an attribute of a class and it can be access with or without using of an object














