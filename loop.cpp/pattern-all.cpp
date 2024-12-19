#include<iostream>
using namespace std;
int main(){
////pattern 1
        
    for(int i=1;i<=4;i++){
        for(int j=4;j>=1;j--){

            if(j<=4-i)
          cout<<" ";

          else{
            cout<<"*";
          }
        }
        cout<<endl;
        
    }


//////pattern 2
   for(int i=4;i>=1;i--){
        for(int j=4;j>=1;j--){

            if(j<=4-i)
          cout<<" ";

          else{
            cout<<"*";
          }
        }
        cout<<endl;
        
    }




////pattern3

    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){

            if(j<=4-i)
          cout<<" ";

          else{
            cout<<"*";
          }
        }
        cout<<endl;
        
    }









    
 
/////pattern4

    
    for(int i=4;i>=1;i--){
        for(int j=1;j<=4;j++){

            if(j<=4-i)
          cout<<" ";

          else{
            cout<<"*";
          }
        }
        cout<<endl;
        
    }



    cout<<"PATTERN  5"<<"\n";


    for(int i=1;i<=4;i++){
        

        for(int j=4;j>=i;j--){
            cout<<" ";

        }

        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }




 cout<<"PATTERN  6 "<<"\n";


    for(int i=4;i>=1;i--){
        

        for(int j=4;j>=i;j--){
            cout<<" ";

        }

        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }


 cout<<"PATTERN  7"<<"\n";


    for(int i=1;i<=4;i++){
        

        for(int j=4;j>=i;j--){
            cout<<" ";

        }

        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

     


    for(int i=4;i>=1;i--){
        

        for(int j=4;j>=i;j--){
            cout<<" ";

        }

        for(int k=1;k<=i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }


}