#include<iostream>
using namespace std;

int main(){
    int i,n,sum=0;
    cout<<"enter a number: ";
    cin>>n;

   int num[n];
  /*  for(i=0;i<n;i++){
        cout<<"enter the number you want to print "<<i<<" :";
        cin>>num[i];

    }*/

    //REVERSE ORDER

  /*  for(i=n-1;i>=0;i--){
         cout<<"enter the number you want to print "<<i<<" :";
        cin>>num[i];
    }

    for(i=n-1;i>0;i--){
        sum=num[i]+sum;

    }
cout<<sum;



//alternet element

for(int i=1;i<n;i=i+2){
    cout<<"enter the number you want to print "<<i<<" :";
        cin>>num[i];

}*/



/*for(int i=1;i<n;i++){
        if(i%7==0){
    cout<<"enter the number you want to print "<<i<<" :";
        cin>>num[i];

        }.



}*/
//even number
for(i=0;i<n;i++){
         cout<<"enter the number you want to print "<<i<<" :";
        cin>>num[i];
    }

    for(i=0;i<n;i++){
            if(i%2==0){
        sum=num[i]+sum;
    }

    }
   cout<<sum;
}
