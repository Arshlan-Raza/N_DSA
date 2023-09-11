#include<iostream>

using namespace std;

int main (){

    int n  ; 
    cin>>n;

    for(int i = 0 ; i < n ; i++){

        for(int j = 0 ; j < 2*i+1 ; j++){

            if(i ==0 || i == n-1){
                cout<<j+1; 
            }
            else{
                if(j  == 0  ){
                    cout<<"1";
                }
                else if(j == 2*i+1-1){
                    cout<<i+1;
                }
                 else{
                    cout<<" ";
                 }
            }
           
        }
        cout<<endl;
    }
}