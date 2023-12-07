#include<iostream>

using namespace std;

int main(){

    int arr[5];
    int n = 5;

    int sum =  0 ;

    for(int i = 0  ; i < n ; i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }

    cout<<"The sum of array is :"<<sum<<endl;
}