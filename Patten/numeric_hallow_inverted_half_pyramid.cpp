#include<iostream>

using namespace std;


int main(){

    int n ; 
    cin>>n;

    for(int i = 0 ; i <= n ; i++){

        if(i == 0){
            for(int j = 0 ; j < n-i; j++)
                cout<<j+1;
        }
        else{
            int count = i+1;
            for(int j = 0 ; j < n-i; j++){
                
            
            if(j == 0 || j == n-1-i){
                cout<<count;
            }
            else{
                cout<<" ";
            }
            count++;
        }
        
            
        }
        cout<<endl;
    }
}