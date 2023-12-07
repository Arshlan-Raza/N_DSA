#include<iostream>

using namespace std;

int main(){

    int arr[5] = {4 ,3,21 ,5,6};
    int target = 21;

    int flag = 0 ;

    for(int i = 0; i < 5; i++){
        if(arr[i] == target){
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"Target Found"<<endl;
    }
    else{
        cout<<"Target not Found"<<endl;
    }
}