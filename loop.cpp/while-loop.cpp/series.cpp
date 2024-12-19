#include<iostream>
using namespace std;
int main(){
double n,sum=0;
cout<<"enter n :";
cin>>n;

for(int i=1;i<=n;i++){
    sum=sum+1.0/i;
    if(i==n){
        cout<<
    }
    cout<<1<<"/"<<i<<"+"<<" ";
}

cout<<endl<<sum;


}




/*int num,reverse=0,lastdigit;
cout<<"enter num ";
cin>>num;

while(num>0){
    lastdigit=num%10;
    reverse=reverse*10+lastdigit;
    num/=10;
}
cout<<reverse;
}
*/
