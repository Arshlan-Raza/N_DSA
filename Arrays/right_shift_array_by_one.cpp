#include<iostream>

using namespace std;

void shiftArray(int arr[],int n){

    int i = n - 1;
    int temp = arr[i];

    for(; i > 0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    cout<<"Shifted Array is :"<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {10,20,30,40,50,60};
    int n = 6;

    shiftArray(arr,n);
}