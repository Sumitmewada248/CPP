
#include<iostream>
using namespace std;


class table{
public:

    static int print(int t){
    for (int i=1;i<10;i++){
        cout<<t<<"*"<<i<<"="<<t*i<<endl;
    }

    }

};

int main(){
int t=5;


table::print(t);


}
