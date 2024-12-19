#include<iostream>
using namespace std;

//shallow copy

class top
{

    int n;
    public:top(int a){
    n=a;
    }
    void show(){
    cout<<"accoutn no : "<<n<<endl;
    }
};

int main(){

top t1(64545);
top t2(t1);
t1.show();
t2.show();


}
