#include<iostream>

using namespace std;

void sortArray(int arr[], int size){
    int i = 0;
    int j = size - 1;

    while(i <= j){

        cout<<arr[i]<<" "<<arr[j]<<endl;
        if(arr[i] > arr[j]){
            swap(arr[i],arr[j]);
            j--;
        }

        i++;

    }

    cout<<"Sorted Array is :"<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {0,1,0,1,1,0,0,0,0};
    int n = 9;
  
    sortArray(arr,n);
}