#include<iostream>

using namespace std;

int main(){

    int arr[10];
    int n = 10;

    for(int i = 0 ; i < n ; i++){
        cin >>arr[i];
    }

    cout<<"Array before doubling up:"<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    for(int i = 0 ; i < n ; i++){
        arr[i] = arr[i] * 2 ;
    }

    cout<<"Array after doubling up:"<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}