#include<iostream>
using namespace std;

int main(){
int cost , total_pen ,discount;
cout<<"enter the cost of pen :";
cin>>cost;

total_pen=cost*70;
cout<<"total cost of pen  "<<total_pen<<endl;

if(total_pen<1000){
discount=total_pen*(10.0/100);
cout<<"total discount  "<<discount <<endl;

}
else if(total_pen>1000)
discount=total_pen*(20.0/100);
cout<<"total discount of pen  "<<discount;
}

