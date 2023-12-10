#include<iostream>

using namespace std;

void swapping(int arr[],int size){
    int j = 0;  //a pointer to a block which has negative number
    for(int i = 0 ; i < size ; i++ ){
        
            if(arr[i] < 0){
                swap(arr[i],arr[j]);
                j++;
            }
        
    }
}


int main(){

    int arr[10] = {23,-7,12,-10,-11,40,60};
    swapping(arr,7);

    cout<<"The array elements are:";
    for(int i = 0; i < 7 ; i++){
        cout<<arr[i]<<" ";
    }
}