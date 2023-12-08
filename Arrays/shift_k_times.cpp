#include<iostream>

using namespace std;

int shiftArray (int arr[],int n , int k){

        int temp[5] ;
        int i = n - 1;
        for(; i >= k; i--){
            temp[(n-1)-i] = arr[i];
        
        }

        // for(int i = 0; i < k ; i++){
        //     cout<<"temp value :"<<temp[i]<<" "<<endl;
        // }
        
         i = n - 1;
        for(;i > 1 ; i--){
            arr[i] = arr[i-k];
        }   

        for(int i = 0 ; i < k ; i++){
            arr[i] = temp[i];
        }

        cout<<"Shifted array by two"<<endl;
        for(int i = 0 ; i < n ; i++){
                cout<<arr[i]<<" ";
        }
}

int main(){ 
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = 8;
    int k = 4;

    shiftArray(arr,n,k);
}