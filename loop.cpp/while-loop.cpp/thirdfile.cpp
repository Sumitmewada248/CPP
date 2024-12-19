#include<iostream>
using namespace std;
int main(){
    int num,lastdigit;
    cout<<"enter the n umber :";
    cin>>num;
    bool yes=false;


    while(num>0){
        lastdigit=num%10;
        num=num/10;

    
    if(lastdigit==9){
        cout<< lastdigit<<endl;
        yes=true;

    }

}
if(yes==true){
    cout<<"yes";
}
else{
    cout<<"no";
}
}
