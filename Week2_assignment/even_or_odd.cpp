#include<iostream>

using namespace std;

// void evenOrOdd(int n ){

//     if(n % 2 == 0)
//         cout<<"Even"<<endl;
//     else    
//         cout<<"Odd"<<endl;

// }

void evenOrOdd(int n ){
 
    if(n & 1 == 0) {

        cout<<"Even"<<endl;

    }  
    else {

        cout<<"Odd"<<endl;
        
    }    
        

}

int main(){

    int n ; 
    cin>>n ;

    evenOrOdd(n);

}