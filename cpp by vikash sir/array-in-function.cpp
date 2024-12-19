///PASSING ARRAY AS A PARAMETER IN A FUNCTION


#include<iostream>
using namespace std;
void arr(int a[], int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<"\t";
    }
}


int main(){
    int x[]={2,3,1,5,4,1};
    int s=sizeof(x)/sizeof(x[0]);
    arr(x,s);



}

