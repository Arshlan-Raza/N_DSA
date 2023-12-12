#include<iostream>

using namespace std;

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i] == val){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[20] ;
    int n ; 
    cin>>n;

   

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int val; 

    cin>>val;

    int  ans = linearSearch(arr,n,val);

    if(ans == 1){
        cout<<"Element Found";
    }
    else{
        cout<<"Element not Found";
    }
}

