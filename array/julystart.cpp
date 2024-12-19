#include<iostream>
using namespace std;

int main(){

 /*   int n;
    cout<<"enter the n :";
    cin>>n;

    int marks[n];
    for (int i=0;i<n;i++){
        cout<<"enter marks of student stored in index"<<i<<":";
        cin>>marks[i];
}
//reverse
 for (int i=n-1;i>0;i--){
        cout<<"enter marks of student stored in index"<<i<<":";
        cin>>marks[i];
}

*/
int n,sum=0,marks;

for(int i=0;i<n;i++){
    cout<<"enter marks :";
    cin>> marks[i];
}
for(int i=0;i<n;i++){
    cout<<marks[i]<<" ";
    sum=sum+marks[i];

}
cout<<"add" <<sum<<endl;
cout<<"average :"<<sum/(float)n;
}
