#include<iostream>

using namespace std;

int fact(int n) {

    int fact = 1;

    if(n == 0){
        return 1;
    }
    else{
        
        for(int i = n ; i >=1 ; i--  ) {

            fact*=i;

        }
    }

    return fact;

}

int main(){

    int n ; 
    cin >> n ; 

    int res = fact(n);
    cout<<res<<endl;
    
}