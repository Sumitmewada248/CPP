#include<iostream>
using namespace std;

int main(){
    //factorial
    int k, n,result=1;
    cout<<"enter the k "<<"enter the n";
    cin>>k>>n;

     for(int i=k;i<=n+1;i++){
         result=result*k;
         }
         cout<<result<<endl;
 }


// Find Hcf of two numbers;
//  int n1,n2,small;
//  cout<<"enter two numbers :";
//  cin>>n1>>n2;
//  bool HCF=false;

//  n1>n2? small=n2  : small=n1;

//  for(int i=small;i>=2;i--){
//     if(n1%i==0 && n2%i==0){
        
//         cout<<"HCF :"<<i<<endl;
//         HCF=true;
//         break;
//     }
//     if(HCF=false)
//     cout<<"no hcf possible";
//  }
    

// }