
///toupper(), tolower(),isupper(),islower(),isdigit(),

#include<iostream>
using namespace std;

int main(){
    //write a progtam to convert uppercase letter into lower one and vice-versa.

    string str="apple 123 A";
    // cout<<isdigit(str[6]);

    for(int i=0; i<str.length();i++){
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }


        else if(islower(str[i])){
        str[i]=toupper(str[i]);   
        }
        

        else if(isdigit(str[i])){
            str[i]='$';
        }
    }
    std::cout<<str;

}

