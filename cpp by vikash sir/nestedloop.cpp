#include<iostream>
using namespace std;
int main(){

/*for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){

       cout<<"*";
    }
    cout<<" "<<endl;
}
*/

  for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){

            if(j<4-i)
          cout<<" ";

          else{
            cout<<"*";


            
          }
        }
        cout<<endl;

    }


}

