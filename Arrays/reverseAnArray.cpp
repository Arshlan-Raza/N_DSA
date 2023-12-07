#include<iostream>

using namespace std;

void reversedArray(int arr[],int size){

    int  i = 0 ;
    int j = size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<<"Reversed Array is:"<<endl;

    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[10] ={1,2,3,4,5,6,7,8,9,10};
    int n = 10 ;

    reversedArray(arr,n);
}