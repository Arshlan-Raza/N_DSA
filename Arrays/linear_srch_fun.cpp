#include<iostream>

using namespace std;


bool linearSearch(int arr[],int size ,int target){
    

 for(int i = 0; i < 5; i++){
        if(arr[i] == target){
            return 1;
        }
    }

    return 0;
}


int main(){

    int arr[5] = {4 ,3,21 ,5,6};
    int target = 21;
    bool ans = linearSearch(arr,5,2);

    if(ans == 1){
        cout<<"Target Found"<<endl;
    }
    else{
        cout<<"Target Not Found"<<endl;
    }
}

