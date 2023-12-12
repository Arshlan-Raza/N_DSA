#include<iostream>

using namespace std;

void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j -1] = i+2;
        arr[j] = i+1;
        j++;
    }

    cout<<"Populated array is:"<<endl;
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[20] ;
    int n ; 
    cin>>n;

    populate(arr,n);
}