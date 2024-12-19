#include<iostream>
using namespace std;
int main(){
/*for(int i=1;i<=4;i++){

    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

for(int i=5;i>=1;i--){

    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}

}
*/
//HOLLOW SQUARE

for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(i==1 ||j==1 ||j==5|| i==5 ){
            cout<<"*";
        }

    }
    cout<<endl;
}
}
