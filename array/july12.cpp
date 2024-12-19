#include<iostream>
using namespace std;
int main(){

//size() or length()
//return number of element;
// string fruit="pineapple ram",new_string="";
// cout<<fruit.length();

// int size=fruit.size();
// 		cout<<size<<endl;
		
// 		new_string=new_string+"now";  // concatenate
// 		cout<<new_string<<endl;
		
// 		new_string=new_string+" or never ";
// 		cout<<new_string<<endl;


string fruit,reverse="";
cout<<"enter any string :";
cin>>fruit;

int size=fruit.size();
for(int i=size-1;i>=0;i--){
    // reverse=reverse+fruit[i];
    if(fruit[i]=='p'||fruit[i]=='o'){
        fruit[i]='$';
    }
}
cout<<fruit;
 
}
