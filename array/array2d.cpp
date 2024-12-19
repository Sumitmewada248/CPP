// // Create a new array from exiting array arr[3][3] ={1,5,1,2,6,9,1,11,2}; , such that it congtains only diagonal elements.
// #include<iostream>
// using namespace std;

// int main(){
// 			int arr[3][3] ={1,5,1,2,6,9,1,11,2};
// 			int new_arr[3][3];
// 			for(int i=0; i<3; i++){
// 				for(int j=0; j<3; j++){
// 						if(i==j){
// 							new_arr[i][j]=arr[i][j];
// 						}
// 				else{
// 					new_arr[i][j]=0;
// 				}
// 			}
				
// 			}
// 			for(int i=0; i<3; i++){
// 				for(int j=0; j<3; j++){
// 					cout<<new_arr[i][j];
// 				}
// 				cout<<endl;
// 				}
// 				cout<<"Diagonal Array Print";
				


// return 0;
// }
// // Create a new array from exiting array arr[3][3] ={1,5,1,2,6,9,1,11,2}; , such that it congtains only diagonal elements.
// #include<iostream>
// using namespace std;

// int main(){
// 			int arr[3][3] ={1,5,1,2,6,9,1,11,2};
// 			int new_arr[3][3];
// 			for(int i=0; i<3; i++){
// 				for(int j=0; j<3; j++){
// 						if(i==j){
// 							new_arr[i][j]=arr[i][j];
// 						}
// 				else{
// 					new_arr[i][j]=0;
// 				}
// 			}
				
// 			}
// 			for(int i=0; i<3; i++){
// 				for(int j=0; j<3; j++){
// 					cout<<new_arr[i][j];
// 				}
// 				cout<<endl;
// 				}
// 				cout<<"Diagonal Array Print";
				









// // Create a new array from exiting array arr[3][3] ={1,5,1,2,6,9,1,11,2}; , such that it congtains only diagonal elements.
// #include<iostream>
// using namespace std;

// int main(){
// 			int arr[3][3] ={1,5,1,2,6,9,1,11,2};
// 			int new_arr[3][3];
// 			for(int i=0; i<3; i++){
// 				for(int j=0; j<3; j++){
// 						if(i==j){
// 							new_arr[i][j]=arr[i][j];
// 						}
// 				else{
// 					new_arr[i][j]=0;
// 				}
// 			}
				
// 			}
// 			for(int i=0; i<3; i++){
// 				for(int j=0; j<3; j++){
// 					cout<<new_arr[i][j];
// 				}
// 				cout<<endl;
// 				}
// 				cout<<"Diagonal Array Print";
				


// return 0;
// }
// // Create a new array from exiting array arr[3][3] ={1,5,1,2,6,9,1,11,2}; , such that it congtains only diagonal elements.
// #include<iostream>
// using namespace std;

// int main(){
// 			int arr[3][3] ={1,5,1,2,6,9,1,11,2};
// 			int new_arr[3][3];
// 			for(int i=0; i<3; i++){
// 				for(int j=0; j<3; j++){
// 						if(i==j){
// 							new_arr[i][j]=arr[i][j];
// 						}
// 				else{
// 					new_arr[i][j]=0;
// 				}
// 			}
				
// 			}
// 			for(int i=0; i<3; i++){
// 				for(int j=0; j<3; j++){
// 					cout<<new_arr[i][j];
// 				}
// 				cout<<endl;
// 				}
// 				cout<<"Diagonal Array Print";
				




// return 0;
// }


#include<iostream>
using namespace std;

int main(){
		int Arr[3][3]={1,5,1,2,6,9,1,11,2};
		int sum;
		for(int i=0; i<3; i++){
			sum=0;
			for(int j=0; j<3; j++){
				cout<<Arr[i][j]<<" ";
				sum=sum+Arr[i][j];
			}
			cout<<"------> " <<sum<<endl;
		}


return 0;
}