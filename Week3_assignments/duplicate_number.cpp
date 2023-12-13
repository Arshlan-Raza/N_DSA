#include<iostream>

using namespace std;

int main(){

    int arr[10] = {1 ,3,6, 8 ,6, 5,9 ,19,56,65};

    int  No = 0 ;

    for(int i = 0  ; i < 10 ; i++){

        No = arr[i] ^ arr[i+1] ;
        
    }

    cout<<"duplicate value is :"<<No;
}