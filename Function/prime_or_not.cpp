#include<iostream>

using namespace std;

bool prime(int n){

    for(int i = 2; i < n ; i++ ){

        if(n % i == 0){
            return false;
        }
    }   
        
    return true;
}

int main() { 

    int n ; 
    cin>>n;

    bool result = prime(n);

    if(result){

        cout<<"It is prime";

    }
    else{

        cout<<"It is not prime";

    }
}