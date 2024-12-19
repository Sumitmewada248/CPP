#include<iostream>
using namespace std;
int main(){
/*int c=90; // 65 to 90 == AtoZ or 97 to 122 == atoz ;

for(int i=0;i<=255;i++)
{

    cout<<i<<"="<<char(i)<<endl;// find the charcter
}
cout<< char(c);*/
/*
int n;
cout<<"enter the number";
cin>>n;

for(int r=65;r<=n;r++){
    for(int c=65;c<=r;c++){
        cout<<char(c);

    }
    cout<<endl;
}
*/

int n;
char t='A';
cout<<"enter the number";
cin>>n;


for(int r=1;r<=n;r++){
    for(int c=1;c<=r;c++){
        cout<<t<<" ";
        t++;

    }
    cout<<endl;
}

}
