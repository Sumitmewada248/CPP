#include<iostream>
using namespace std;
int main(){

/*int i=0;
for(i=i+3;i<=10;i++){
    for(;;)// by default it is 1 or 1 or 1

    cout<<i<<endl;
}
*/

int n,s=0;
cout<<"enter the number";
cin>>n;

for(int i=1;i<n;i++){
    if(n%i==0){
       s=s+i;

    }
}
if(s==n){
    cout<<"perfect no";
}
else{
    cout<<"not perfect no";
}
}
