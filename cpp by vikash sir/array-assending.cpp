
#include<iostream>
using namespace std;
int main(){

int arr[]={1,4,5,3,2,9};
int s=sizeof(arr)/sizeof(arr[0]);


int temp;
cout<<"\n sorted array is \n";
for (int i=0;i<s;i++){
    for(int j=i;j<s-1;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(int i=0;i<s;i++){
    cout<<arr[i]<<endl;
}
}
