#include<iostream>

using namespace std;

int main(){

    int num ; 
    cin>>num ;

    int n = num/2;

    for(int i = 0 ; i < n ; i++){

        
         // spaces
        for(int j = 0 ; j < (n-i-1)  ; j++){

            cout<<" ";

        }
        
        // star
        for(int j = 0 ; j <(i+1) ; j++){

            cout<<"* ";

        }
        
        cout<<endl;
    }

    for(int i = 0 ; i < n ; i++){

        // spaces
        for(int j = 0 ; j < i ; j++){

            cout<<" ";

        }
        
        // star
        for(int j = 0 ; j < (n-i); j++){

            cout<<"* ";

        }

        cout<<endl;

    }
}