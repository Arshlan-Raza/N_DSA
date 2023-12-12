#include<iostream>

using namespace std;

void swapAlternate(int arr[],int size){
    int j  = 0 ;
    for(int i=0;i<size;i = i+2){
        // cout<<"Value of arr[j] and arr[j+2]"<<arr[j]<<" "<<arr[j+2]<<endl;
       swap(arr[j],arr[j+2]);
        j++;
    }

    cout<<"Swapped Array is:"<<endl;
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[20] ;
    int n ; 
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

     swapAlternate(arr,n);
}


