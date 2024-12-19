#include<iostream>
using namespace std;
 
 int main(){

 int length,breath,rectangle,square ,side;

 cout<<"enter the length  ";
 cin>>length;
 cout<<"enter the breath ";
 cin>>breath;

 cout<<"side of square : ";
 cin>>side;

rectangle=length*breath;
cout<<"area of rectangle  "<<rectangle<<endl;

square=side*side;
cout<<"are of square  "<<square<<endl;

if(rectangle>=square){
    cout<<"area of rectangle is maximum  "<<endl;

}
else{
    cout<<"area of square is maximum  "<<endl;
}


 }

 

