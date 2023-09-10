#include<iostream>

using namespace std;


int main(){

    int num ; 
    cin>>num;
    int n = num/2;

    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j<(2*i+1) ; j++){
            if((j+1) %  2 == 0){
                cout<<"*";
            }
            else{
                cout<<i+1;
            }
        }
        cout<<endl;
    }
     for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j<(2*n-2*i-1) ; j++){
            if((j+1) %  2 == 0){
                cout<<"*";
            }
            else{
                cout<<n-i;
            }
        }
        cout<<endl;
    }
}