#include<iostream>
using namespace std;

int main(){

int s=53,w=-3,z=22;

cout<<++s<<endl;
w=++s;
cout<<w<<endl;
z=s--;
cout<<z<<endl;
s=++s;
cout<<s;
}
//&= am persand;
//&&= for and;
// ||=vertical bar for OR;

//!=for not;

//*=asterik;
int a,b,c;
cout<<"enter a,b and c";
cin>>a>>b>>c;

cout<<"a>b && b<c"<<(a>b && b<c)<<endl;
cout<<"a>b || b<c"<<(a>b || b<c)<<endl;
cout<<"not of a==b"<<!(a==b)<<endl;
