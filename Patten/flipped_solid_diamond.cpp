#include<iostream>

using namespace std;

int main(){

    int num ; 
    cin>>num ; 

    int n = num/2;

    for(int i = 0 ; i < n ; i++){

        //inverted pyramid 1 
        for(int j = 0 ; j < n-i ; j++){

            cout<<"*";
        }

        //spaces 
        for(int j = 0 ; j < 2*i+1 ; j++){
                
            cout<<" ";

        }
           
        
        // inverted pyramid 2
        for(int j = 0 ; j < n-i ;j++ ){

            cout<<"*"; 

        }

        cout<<endl;
    }

       for(int i = 0 ; i < n ; i++){

        //inverted pyramid 1 
        for(int j = 0 ; j < i+1 ; j++){

            cout<<"*";
        }

        //spaces 
        for(int j = 0 ; j <(2*n-2*i-1) ; j++){
                
            cout<<" ";

        }
           
        
        // inverted pyramid 2
        for(int j = 0 ; j < i+1 ;j++ ){

            cout<<"*"; 

        }

        cout<<endl;
    }
   
}