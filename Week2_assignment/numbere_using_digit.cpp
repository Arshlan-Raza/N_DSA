#include<iostream>

using namespace std;

int main(){
    
    int n ; 
    cout<<"hwo many numbers do you want?";
    cin>>n;
    int num ;
    int result = 0 ; 
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the "<<i+1<<" number";
        cin>>num;
        
        result = result * 10 + num;
        
    }
    cout<<"your number is "<<result;
    
    
}