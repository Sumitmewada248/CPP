
#include<iostream>
using namespace std;


/*class stu{
public: stu(){  // implicit calling / Default Constructor
cout<<"constructed";
};
};

int main(){
stu t;

}
*/

class login{

int code=1010;
int pwd=2001;
public:login(int c, int p){
if(c==code && p==pwd){
    cout<<"weldone";
}
else{
    cout<<"unwell";
}
}

};


int main(){
int code ,pwd;
cout<<"enter code "<<endl;
cin>>code;
cout<<"enter code "<<endl;
cin>>pwd;

login obj (code,pwd);
}
