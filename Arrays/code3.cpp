#include<iostream>

using namespace std;

int main(){
    int arr[5];
    int n = 5;

    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the element "<<i<<":";
        cin>>arr[i];
    }

    cout<<endl;
    for(int i = 0 ; i < n ; i++){
        cout <<arr[i]<<" ";
    }
}