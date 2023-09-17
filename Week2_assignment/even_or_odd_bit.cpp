#include<iostream>

using namespace std;


void evenOrOdd(int n ){
 
    if(n & 1) {

        cout<<"Odd"<<endl;

    }  
    else {

        cout<<"Even"<<endl;
        
    }    
        

}

int main(){

    int n ; 
    cin>>n ;

    evenOrOdd(n);

}