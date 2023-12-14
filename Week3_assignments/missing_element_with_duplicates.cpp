#include<iostream>
#include<math.h>

using namespace std;

void findMissing(int arr[] , int size){

    for(int i = 0 ; i < size ; i++){
        int index = abs(arr[i]) ;
        if(arr[index -1] > 0){
            arr[index -1]*= -1;
        }
       
    }

    for(int i = 0 ; i < size ;i++){
        if(arr[i] > 0){
            cout<<i+1<<" ";
        }
    }
}


int main(){

    int arr[] = {1,2,3,5,5};
    int n = sizeof(arr) / sizeof(int);
     findMissing(arr,n);

}