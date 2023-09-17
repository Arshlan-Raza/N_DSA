#include<iostream>

using namespace std;


int reverseNumber(int n){

    int rem ; 
    int rev = 0 ;

    int num = n;

    while( num != 0) {

        rem = num % 10;
        rev = (rev * 10 )  + rem;

        num = num / 10;
    }

    return rev;

}


int main() {

    int n ; 
    cin>>n ; 

    int reversedNumber = reverseNumber(n);

    cout<<reversedNumber<<endl;
}